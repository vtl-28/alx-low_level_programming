#include "main.h"
#include <string.h>

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: string to fill
 * @b: characters to fill string with
 * @n: number of bytes tp be filled
 * Return: pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
