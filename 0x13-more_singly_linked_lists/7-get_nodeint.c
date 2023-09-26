#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Get the node at a specified index
 * in a linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: A pointer to the node at the specified 'index'
 * if found, or NULL if
 *         the 'index' is out of bounds or the list is empty.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int si = 0;
	listint_t *sn = head->next;

	while (si != index)
	{
		head = sn;
		sn = head->next;
		si++;
	}
	return (head);
}
