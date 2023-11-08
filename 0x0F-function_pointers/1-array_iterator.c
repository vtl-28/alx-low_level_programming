#include <stdlib.h>
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
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
