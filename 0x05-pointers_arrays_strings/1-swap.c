#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: integer one
 * @b: integer two
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
