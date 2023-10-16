#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int arr_length = _strlen(s);
	int i;
	char t;

	for (i = 0; i < arr_length / 2; i++)
	{
		t = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = t;
	}
}
