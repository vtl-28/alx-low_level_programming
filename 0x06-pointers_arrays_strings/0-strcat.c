#include "main.h"
#include <string.h>

/**
 * *_strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);

	return (dest);
}
