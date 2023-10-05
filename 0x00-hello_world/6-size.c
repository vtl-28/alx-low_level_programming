#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	int sizeOfC = sizeof(c);
	int sizeOfI = sizeof(i);
	int sizeOfLi = sizeof(li);
	int sizeOfLli = sizeof(lli);
	int sizeOfF = sizeof(f);

	printf("Size of a char: %i byte(s)\n", sizeOfC);
	printf("Size of an int: %i byte(s)\n", sizeOfI);
	printf("Size of a long int: %i byte(s)\n", sizeOfLi);
	printf("Size of a long long int: %i byte(s)\n", sizeOfLli);
	printf("Size of a float: %i byte(s)\n", sizeOfF);

	return (0);
}
