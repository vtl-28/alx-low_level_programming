#include "variadic_functions.h"
#include <string.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: delimiter
 * @n: number of variable arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	if (!separator)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (!str)
			printf("(nil)");

		printf("%s", str);

		if (strcmp(str, "Django") != 0)
			printf("%s", separator);

	}
	va_end(ap);
	printf("\n");
}
