#include "hash_tables.h"
/**
 * key_index - Computes the index for a given key based
 * on a specified size.
 * @key: The key for which to compute the index.
 * @size: The size of the hash table.
 *
 * Return: The computed index for the given key within
 * the specified size.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (*key % size);
}
