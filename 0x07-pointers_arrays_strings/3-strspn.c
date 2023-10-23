#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to scan
 * @accept: characters to match in @s
 * Return: returns the number of characters in the initial string
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
