#include "lists.h"

void myStartupFun(void) __attribute__((constructor));


/**
 * myStartupFun - function executed before main
 * Return: no return.
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
