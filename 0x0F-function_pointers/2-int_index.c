#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array: array to search
 * @size: size of array
 * @cmp: function to execute of array elements
 * Return: return index of matching element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
