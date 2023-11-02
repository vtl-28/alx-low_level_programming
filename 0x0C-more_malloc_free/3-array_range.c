#include "main.h"
#include <stdlib.h>

/**
 * *array_range -  function that creates an array of integers.
 * @min: minimum digit
 * @max: maximum digit
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p, n;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	p = malloc(sizeof(*p) * n);
	if (!p)
		return (NULL);
	while (n--)
		p[n] = max--;
	return (p);
}
