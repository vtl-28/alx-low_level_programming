#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter on
 * each element of an array.
 * @array: array to access elements from
 * @size: size of array
 * @action: function to execute on every element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
