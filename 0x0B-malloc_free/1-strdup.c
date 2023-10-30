#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i;

	char *duplicateString;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	i++;


	duplicateString = malloc(sizeof(char) * i);

	duplicateString = strdup(str);

	if (duplicateString == NULL)
	{
		return (NULL);
	}
	else
	{
		return (duplicateString);
	}
	free(duplicateString);
}
