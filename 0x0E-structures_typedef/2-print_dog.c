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
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
