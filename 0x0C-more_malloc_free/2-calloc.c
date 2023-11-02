#include "main.h"
#include <stdlib.h>

/**
 * *_calloc -  function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size byte of each element
 * Return: returns a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (!p)
		return (NULL);

	nmemb *= size;

	while (nmemb--)
		p[nmemb] = 0;
	

	return (p);
}
