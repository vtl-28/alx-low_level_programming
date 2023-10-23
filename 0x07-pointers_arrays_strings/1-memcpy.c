#include "main.h"
#include <string.h>

/**
 * *_memcpy - function that copies memory area.
 * @dest: destination of data to be copied
 * @src: where the copied data comes from
 * @n: number of bytes to be copied
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
