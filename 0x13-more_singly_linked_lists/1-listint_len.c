#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Count the number of elements in a linked list of integers.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t ele = 0;

	while (h)
	{
		h = h->next;
		ele++;
	}
	return (ele);
}
