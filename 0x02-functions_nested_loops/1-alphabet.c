#include "main.h"

/**
 * print_alphabet - function to print the alphabet
 */

void print_alphabet(void)
{
	char startOfAlphabet = 'a';
	char endOfAlphabet = 'z';
	char i;

	for (i = startOfAlphabet; i <= endOfAlphabet; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
