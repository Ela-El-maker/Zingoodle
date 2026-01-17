#include "memory.h"
#include <stdio.h>
#include <assert.h>

#define ARENA_SIZE 1024

int main()
{
    printf("Zingoodle Memory Allocator Test\n");

    // Create memory arena
    void *arena = malloc(ARENA_SIZE);
    assert(arena != NULL);

    // Create allocator
    zingoodle_allocator_t *alloc = zingoodle_bump_allocator_create(arena, ARENA_SIZE);
    assert(alloc != NULL);

    assert(zingoodle_allocator_used(alloc) == 0);
    assert(zingoodle_allocator_available(alloc) == ARENA_SIZE);

    // Allocate some memory
    int *int_ptr = (int *)zingoodle_allocator_alloc(alloc, sizeof(int));
    assert(int_ptr != NULL);
    *int_ptr = 42;

    char *str_ptr = (char *)zingoodle_allocator_alloc(alloc, 10 * sizeof(char));
    assert(str_ptr != NULL);
    strcpy(str_ptr, "Hello");

    printf("Allocated: int=%d, string='%s'\n", *int_ptr, str_ptr);
    printf("Used: %zu bytes, Available: %zu bytes\n",
           zingoodle_allocator_used(alloc),
           zingoodle_allocator_available(alloc));

    // Reset allocator
    zingoodle_allocator_reset(alloc);
    assert(zingoodle_allocator_used(alloc) == 0);

    // Allocate again (should reuse space)
    double *double_ptr = (double *)zingoodle_allocator_alloc(alloc, sizeof(double));
    assert(double_ptr != NULL);
    *double_ptr = 3.14159;

    printf("After reset - Allocated: double=%.5f\n", *double_ptr);

    // Clean up
    zingoodle_allocator_destroy(alloc);
    free(arena);

    printf("All memory tests passed!\n");
    return 0;
}