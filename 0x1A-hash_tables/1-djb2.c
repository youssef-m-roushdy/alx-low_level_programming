#include "hash_tables.h"
/**
 * hash_djb2 - Implements the djb2 algorithm to
 * compute the hash value
 *             of a given string.
 * @str: The input string to compute the hash for.
 *
 * Return: The computed hash value for the input string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
