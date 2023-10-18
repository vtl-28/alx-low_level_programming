#include "main.h"
#include "string.h"

/**
 * *_strncpy - function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: number of characters to append
 * Return: pointer to resutlting copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);
	return (dest);
}
