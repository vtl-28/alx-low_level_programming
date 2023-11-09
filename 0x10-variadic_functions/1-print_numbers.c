#include "variadic_functions.h"


/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: delimeter
 * @n: number of variable arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int digit;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		digit = va_arg(ap, int);

		printf("%d", digit);

		if (digit != 402)
			printf("%s", separator);

	}
	va_end(ap);
	printf("\n");
}
