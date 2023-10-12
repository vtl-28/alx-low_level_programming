#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int r, c;

	r = 0;

	while (r <= 9)
	{
		c = 0;

		while (c <= 14)
		{
			if (c > 9)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
			c++;
		}

		_putchar('\n');
		r++;
	}
}
