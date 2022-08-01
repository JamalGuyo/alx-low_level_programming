#include <stdio.h>
#include <math.h>
#include "dog.h"

/**
 * print_dog - fn to print struct data
 * @d: pointer to struct d
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	(d->name == NULL) ? printf("nil\n") : printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	(d->owner == NULL) ? printf("nil\n") : printf("Owner: %s\n", d->owner);
}
