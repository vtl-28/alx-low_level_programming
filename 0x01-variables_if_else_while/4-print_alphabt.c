#include <stdio.h>

/**
 * main - Entry point
 * program that prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');

	return (0);
}
