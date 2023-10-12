#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: character to check
 * Return: return 1 if true, 0 if false
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
