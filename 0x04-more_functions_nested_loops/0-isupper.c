#include "main.h"
#include <ctype.h>

/**
 * _isupper - function to detect uppercase character
 * @c: character to be checked
 *Return: return 1 if true, 0 is false
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
