#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer dog struct
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	else if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age,
		       d->owner);
}
