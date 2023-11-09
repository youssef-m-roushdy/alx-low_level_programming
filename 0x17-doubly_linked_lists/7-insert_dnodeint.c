#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a specific
 * index in a doubly linked list.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be inserted (starting from 0).
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
		}
		else
			return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
