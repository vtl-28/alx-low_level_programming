#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: character to check
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
