#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - Creates a hash table with
 * a specified size.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the newly created hash table,
 * or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return (ht);
}