#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
int l1, l2;
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
l1 = strlen(owner) + 1;
l2 = strlen(name) + 1;
new_dog->name = malloc(l2);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
strcpy(new_dog->name, name);
new_dog->owner = malloc(l1);
if (new_dog->owner == NULL)
{
free(new_dog);
free(new_dog->name);
return (NULL);
}
strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}
