#include "main.h"
#include <string.h>

/**
 * *_strchr - function that locates a character in a string
 * @s: string to search
 * @c: character to find in @s
 * Return: pointer to the first occurrence of the character @c in the string @s
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
