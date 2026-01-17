#ifndef ZINGOODLE_ARRAY_H
#define ZINGOODLE_ARRAY_H

#include <stddef.h>
#include <stdbool.h>

// Dynamic Array Structure
typedef struct
{
    void *data;          // Pointer to array data
    size_t size;         // Current number of elements
    size_t capacity;     // Current capacity
    size_t element_size; // Size of each element
} zingoodle_array_t;

// Core operations
zingoodle_array_t *zingoodle_array_create(size_t element_size, size_t initial_capacity);
void zingoodle_array_destroy(zingoodle_array_t *array);

bool zingoodle_array_resize(zingoodle_array_t *array, size_t new_capacity);
bool zingoodle_array_push_back(zingoodle_array_t *array, const void *element);
bool zingoodle_array_pop_back(zingoodle_array_t *array);
bool zingoodle_array_get(const zingoodle_array_t *array, size_t index, void *out_element);
bool zingoodle_array_set(zingoodle_array_t *array, size_t index, const void *element);

size_t zingoodle_array_size(const zingoodle_array_t *array);
size_t zingoodle_array_capacity(const zingoodle_array_t *array);
bool zingoodle_array_empty(const zingoodle_array_t *array);

#endif // ZINGOODLE_ARRAY_H