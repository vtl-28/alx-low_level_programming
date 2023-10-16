#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int arr_length = _strlen(s);
	int i;

	for (i = arr_length - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
