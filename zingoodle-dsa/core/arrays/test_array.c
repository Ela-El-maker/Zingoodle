#include "array.h"
#include <stdio.h>
#include <assert.h>

int main()
{
    printf("Zingoodle Array Test\n");

    // Create array for integers
    zingoodle_array_t *arr = zingoodle_array_create(sizeof(int), 4);
    assert(arr != NULL);
    assert(zingoodle_array_empty(arr));
    assert(zingoodle_array_size(arr) == 0);
    assert(zingoodle_array_capacity(arr) == 4);

    // Push back some values
    int values[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        assert(zingoodle_array_push_back(arr, &values[i]));
    }

    assert(zingoodle_array_size(arr) == 5);
    assert(zingoodle_array_capacity(arr) >= 5);

    // Test get/set
    int val;
    assert(zingoodle_array_get(arr, 2, &val));
    assert(val == 30);

    int new_val = 99;
    assert(zingoodle_array_set(arr, 2, &new_val));
    assert(zingoodle_array_get(arr, 2, &val));
    assert(val == 99);

    // Test pop
    assert(zingoodle_array_pop_back(arr));
    assert(zingoodle_array_size(arr) == 4);

    // Clean up
    zingoodle_array_destroy(arr);

    printf("All tests passed!\n");
    return 0;
}