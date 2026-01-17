#include "array.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Internal helper functions
static bool zingoodle_array_grow(zingoodle_array_t *array)
{
    size_t new_capacity = array->capacity == 0 ? 1 : array->capacity * 2;
    return zingoodle_array_resize(array, new_capacity);
}

// Public API implementations
zingoodle_array_t *zingoodle_array_create(size_t element_size, size_t initial_capacity)
{
    if (element_size == 0)
        return NULL;

    zingoodle_array_t *array = (zingoodle_array_t *)malloc(sizeof(zingoodle_array_t));
    if (!array)
        return NULL;

    array->size = 0;
    array->capacity = initial_capacity;
    array->element_size = element_size;
    array->data = initial_capacity > 0 ? malloc(element_size * initial_capacity) : NULL;

    if (initial_capacity > 0 && !array->data)
    {
        free(array);
        return NULL;
    }

    return array;
}

void zingoodle_array_destroy(zingoodle_array_t *array)
{
    if (array)
    {
        free(array->data);
        free(array);
    }
}

bool zingoodle_array_resize(zingoodle_array_t *array, size_t new_capacity)
{
    if (!array)
        return false;

    if (new_capacity == 0)
    {
        free(array->data);
        array->data = NULL;
        array->capacity = 0;
        array->size = 0;
        return true;
    }

    void *new_data = realloc(array->data, array->element_size * new_capacity);
    if (!new_data)
        return false;

    array->data = new_data;
    array->capacity = new_capacity;

    // Adjust size if necessary
    if (array->size > new_capacity)
    {
        array->size = new_capacity;
    }

    return true;
}

bool zingoodle_array_push_back(zingoodle_array_t *array, const void *element)
{
    if (!array || !element)
        return false;

    if (array->size >= array->capacity)
    {
        if (!zingoodle_array_grow(array))
            return false;
    }

    memcpy((char *)array->data + array->size * array->element_size, element, array->element_size);
    array->size++;
    return true;
}

bool zingoodle_array_pop_back(zingoodle_array_t *array)
{
    if (!array || array->size == 0)
        return false;
    array->size--;
    return true;
}

bool zingoodle_array_get(const zingoodle_array_t *array, size_t index, void *out_element)
{
    if (!array || !out_element || index >= array->size)
        return false;
    memcpy(out_element, (char *)array->data + index * array->element_size, array->element_size);
    return true;
}

bool zingoodle_array_set(zingoodle_array_t *array, size_t index, const void *element)
{
    if (!array || !element || index >= array->size)
        return false;
    memcpy((char *)array->data + index * array->element_size, element, array->element_size);
    return true;
}

size_t zingoodle_array_size(const zingoodle_array_t *array)
{
    return array ? array->size : 0;
}

size_t zingoodle_array_capacity(const zingoodle_array_t *array)
{
    return array ? array->capacity : 0;
}

bool zingoodle_array_empty(const zingoodle_array_t *array)
{
    return !array || array->size == 0;
}