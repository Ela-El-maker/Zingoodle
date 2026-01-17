#include "memory.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Bump allocator structure
struct zingoodle_allocator
{
    void *memory_start;
    size_t total_size;
    size_t used;
};

// Create bump allocator
zingoodle_allocator_t *zingoodle_bump_allocator_create(void *memory, size_t size)
{
    if (!memory || size == 0)
        return NULL;

    zingoodle_allocator_t *allocator = (zingoodle_allocator_t *)malloc(sizeof(zingoodle_allocator_t));
    if (!allocator)
        return NULL;

    allocator->memory_start = memory;
    allocator->total_size = size;
    allocator->used = 0;

    return allocator;
}

void zingoodle_allocator_destroy(zingoodle_allocator_t *allocator)
{
    if (allocator)
    {
        free(allocator);
    }
}

// Allocate memory (bump pointer)
void *zingoodle_allocator_alloc(zingoodle_allocator_t *allocator, size_t size)
{
    if (!allocator || size == 0)
        return NULL;

    // Align to 8 bytes for simplicity
    size = (size + 7) & ~7;

    if (allocator->used + size > allocator->total_size)
    {
        return NULL; // Out of memory
    }

    void *ptr = (char *)allocator->memory_start + allocator->used;
    allocator->used += size;

    return ptr;
}

// Reset allocator (free all)
void zingoodle_allocator_reset(zingoodle_allocator_t *allocator)
{
    if (allocator)
    {
        allocator->used = 0;
    }
}

// Statistics
size_t zingoodle_allocator_used(const zingoodle_allocator_t *allocator)
{
    return allocator ? allocator->used : 0;
}

size_t zingoodle_allocator_available(const zingoodle_allocator_t *allocator)
{
    return allocator ? (allocator->total_size - allocator->used) : 0;
}