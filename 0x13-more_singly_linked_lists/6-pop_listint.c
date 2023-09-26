#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
	int d;
	listint_t *pop = (*head)->next;

	if (*head == NULL)
		return (0);
	d = (*head)->n;
	*head = NULL;
	*head = pop;
	return (d);
}
