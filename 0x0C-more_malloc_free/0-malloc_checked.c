#include "main.h"
#include "stdlib.h"

/**
 * *malloc_checked -  function that allocates memory using malloc
 * @b: space in memory to allocate
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
