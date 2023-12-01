#include "hash_tables.h"
/**
 * hash_table_get - Retrieves the value associated
 * with a given key in a hash table.
 * @ht: The hash table from which to retrieve the value.
 * @key: The key for which to search the hash table.
 *
 * Return: The value associated with the key if found,
 * or NULL if the key is not present.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
