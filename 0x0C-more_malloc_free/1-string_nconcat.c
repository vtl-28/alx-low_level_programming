#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to copy from @s2
 * Return: point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s, *r;
	unsigned int s1Length, s2Length;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	s1Length = strlen(s1);
	s2Length = strlen(s2);

	s2Length = s2Length > n ? n : s2Length;

	r = s = malloc(s1Length + s2Length + 1);

	if (!s)
		return (NULL);

	while (*s1)
		*s++ = *s1++;

	while (s2Length--)
		*s++ = *s2++;

	*s = '\0';

	return (r);
}
