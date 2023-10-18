#include "main.h"
#include <string.h>

/**
 * *_strncat -  function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of characters to append
 * Return: pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);

	return (dest);
}
