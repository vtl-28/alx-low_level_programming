#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - function that prints half of a string
 * @str: variable to reduce by half
 */

void puts_half(char *str)
{
	int i;
	int oE = 0;

	if (_strlen(str) % 2 != 0)
	{
		oE += 1;
	}

	for (i = (_strlen(str) + oE) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	
	_putchar('\n');
}
