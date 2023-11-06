#include <string.h>
#include <stdio.h>

/**
 * main -  prints the name of the file it was compiled from
 * Return: Always 0 (success)
 */

#ifndef __FILENAME__
#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : \
__FILE__)
#endif

int main(void)
{
	printf("%s\n", __FILENAME__);

	return (0);
}
