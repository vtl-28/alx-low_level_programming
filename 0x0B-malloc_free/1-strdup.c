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
	char *duplicateString;

	if (str == NULL)
		return (NULL);

	duplicateString = malloc(sizeof(char) * strlen(str));

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
