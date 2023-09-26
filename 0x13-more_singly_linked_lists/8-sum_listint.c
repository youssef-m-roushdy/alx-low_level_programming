#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - Calculate the sum of all integers in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The sum of all integer values in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
