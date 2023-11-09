#include "lists.h"
/**
 * get_dnodeint_at_index - Gets the node at a specific
 * index in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: A pointer to the node at the specified index,
 * or NULL if the node is not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		if (head->next != NULL)
			head = head->next;
		else
		return (NULL);
	}
	return (head);
}
