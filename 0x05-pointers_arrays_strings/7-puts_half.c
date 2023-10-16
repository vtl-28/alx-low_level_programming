#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - function that prints half of a string
 * @str: variable to reduce by half
 */

void puts_half(char *str)
{
	int i;

	int first_half = _strlen(str) / 2;

	for (i = first_half; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
