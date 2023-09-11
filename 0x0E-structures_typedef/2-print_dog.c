#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints the information
 * about a dog, including its
 * name, age, and owner. If any of these fields are NULL,
 * it prints "(nil)".
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
