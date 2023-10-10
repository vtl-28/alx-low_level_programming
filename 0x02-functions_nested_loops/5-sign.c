#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: variable to check
 * Return: return 1 if true, 0 if false
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
