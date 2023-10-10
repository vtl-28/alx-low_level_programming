#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();

	return (0);
}

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
