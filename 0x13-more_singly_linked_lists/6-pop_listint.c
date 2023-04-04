#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a list and
 * returns the head data n.
 * @head: listint_t structure.
 * Return: head's data
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	new_head = *head;
	*head = (*head)->next;

	free(new_head);
	return (data);
}
