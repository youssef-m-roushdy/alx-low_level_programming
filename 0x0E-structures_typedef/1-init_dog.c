#include "dog.h"
/**
 * init_dog - Initializes a dog structure with provided data.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to a character string representing the
 * dog's name.
 * @age: Age of the dog as a floating-point number.
 * @owner: Pointer to a character string representing the
 * dog's owner.
 *
 * Description: This function initializes the members of a
 * dog structure with the
 * provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
