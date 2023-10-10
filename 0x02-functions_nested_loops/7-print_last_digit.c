#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: variable to check
 * Return: returns int last digit
 */

int print_last_digit(int n)
{
	_putchar('0' + abs(n % 10));
	return (abs(n % 10));
}
