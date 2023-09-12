#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Defines a structure to represent information
 * about a dog.
 * @name: Pointer to a character string for the dog's name.
 * @age: Age of the dog as a floating-point number.
 * @owner: Pointer to a character string for the dog's owner.
 *
 * Description: This structure contains information about
 * a dog, including its
 * name, age, and the name of its owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
