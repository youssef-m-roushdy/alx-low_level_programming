#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - Free memory allocated for a linked list of integers.
 * @head: A pointer to the head of the linked list.
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *temp = head->next;

		free(head);
		head = temp;
	}
}
