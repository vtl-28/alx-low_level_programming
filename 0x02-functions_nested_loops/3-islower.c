#include "main.h"
#include <ctype.h>

/**
 * _islower - function that checks for lowercase character.
 * @c: character to compare
 * Return: 1 if true, 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
