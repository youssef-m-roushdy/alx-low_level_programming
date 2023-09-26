#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - Remove the head node of a linked list and return its value.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: The value of the removed head node.
 * If the list is empty or 'head' is
 *         NULL, it returns 0.
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *pop;

	if (!head || !*head)
		return (0);
	d = (*head)->n;
	pop = (*head)->next;
	free(*head);
	*head = pop;
	return (d);
}
