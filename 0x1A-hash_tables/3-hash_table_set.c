#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_set - Adds an element to a hash table.
 * @ht: The hash table to which the element will be added.
 * @key: The key for the new element.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int idx;
	char *copy_val;

	idx = key_index((const unsigned char *)key, ht->size);
	if (!ht)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	copy_val = strdup(key);
	if (!copy_val)
	{
		free(new);
		return (0);
	}
	new->key = copy_val;
	copy_val = strdup(value);
	if (!copy_val)
	{
		free(copy_val);
		free(new);
		return (0);
	}
	new->value = copy_val;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
