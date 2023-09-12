#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to a dog_t structure to be freed.
 *
 * This function takes a pointer to a dog_t structure and frees the memory
 * allocated for its 'name' and 'owner' fields, as well as the memory for
 * the structure itself. It should be used to clean up memory when you no
 * longer need a dog structure.
 */
void free_dog(dog_t *d)
{
free(d->name);
free(d->age);
free(d->owner);
free(d);
}
