#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
	int d;
	listint_t *pop = (*head)->next;

	if (!*head || !head)
		return (0);
	d = (*head)->n;
	free(*head);
	*head = pop;
	return (d);
}
