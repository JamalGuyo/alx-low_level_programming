#include <stdio.h>
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

	d->name ? printf("nil\n") : printf("Name: %s\n", d->name);
	d->age ? printf("nil\n") : printf("Age: %f\n", d->age);
	d->owner ? printf("nil\n") : printf("Owner: %s\n", d->owner);
}
