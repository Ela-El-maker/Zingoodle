#ifndef ZINGOODLE_MEMORY_H
#define ZINGOODLE_MEMORY_H

#include <stddef.h>
#include <stdbool.h>

// Memory allocator interface
typedef struct zingoodle_allocator zingoodle_allocator_t;

// Create a simple bump allocator
zingoodle_allocator_t *zingoodle_bump_allocator_create(void *memory, size_t size);
void zingoodle_allocator_destroy(zingoodle_allocator_t *allocator);

// Allocate memory
void *zingoodle_allocator_alloc(zingoodle_allocator_t *allocator, size_t size);

// Free all memory (for bump allocator, this resets)
void zingoodle_allocator_reset(zingoodle_allocator_t *allocator);

// Get allocation statistics
size_t zingoodle_allocator_used(const zingoodle_allocator_t *allocator);
size_t zingoodle_allocator_available(const zingoodle_allocator_t *allocator);

#endif // ZINGOODLE_MEMORY_H