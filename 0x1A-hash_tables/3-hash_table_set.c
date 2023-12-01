#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_set - Adds an element to a hash table.
 * @ht: The hash table to which the element will be added.
 * @key: The key for the new element.
 * @value: The value associated with the key.
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int idx;

	if (*key == '\0' || key == NULL || value == NULL || ht == NULL)
		return (0);
	idx = key_index((const unsigned char *) key, ht->size);
	if (idx >= ht->size)
		return (0);
	if (ht->array[idx] == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[idx];
		ht->array[idx] = node;
		return (1);
	}
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key))
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
