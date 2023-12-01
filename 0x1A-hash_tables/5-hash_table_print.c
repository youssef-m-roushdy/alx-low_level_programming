#include "hash_tables.h"
/**
 * hash_table_print - Prints the elements of a hash table.
 * @ht: The hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			if (flag == 1)
				printf(", ");
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
