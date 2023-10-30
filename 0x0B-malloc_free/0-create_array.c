#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars,
 *  and initializes it with a specific char
 * @size: number of bytes
 * @c: unit of bytes
 * Return: return a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
