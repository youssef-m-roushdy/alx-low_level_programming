#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node at a specified
 * index in a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index at which to insert the new node.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly inserted node, or NULL
 * if memory allocation fails
 *         or if the index is out of bounds.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
while (temp && i < idx)
{
temp = temp->next;
i++;
}
if (temp && i == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
return (NULL);
}
