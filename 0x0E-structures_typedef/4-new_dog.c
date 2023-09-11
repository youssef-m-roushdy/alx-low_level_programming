#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog structure with provided data.
 * @name: Pointer to a character string representing the dog's name.
 * @age: Age of the dog as a floating-point number.
 * @owner: Pointer to a character string representing the dog's owner.
 *
 * Return: Pointer to the newly created dog structure,
 * or NULL if memory allocation fails.
 *
 * Description: This function creates a new dog structure
 * and initializes its
 * members with the provided values for name, age, and owner.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
	return (NULL);
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
