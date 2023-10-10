#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 *  in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int step = 0;

	while (step < 10)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
		step++;
	}
}
