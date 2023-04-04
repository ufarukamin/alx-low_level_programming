#include "lists.h"

/**
* reverse_listint - Reverses a listint_t list.
* @head: pointer to the head of the list_t list.
* Return: pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next__, *previous;

	if (head == NULL || *head == NULL)
		return (NULL);
	previous = NULL;
	while ((*head)->next != NULL)
	{
		next__ = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next__;
	}
	(*head)->next = previous;
	return (*head);
}
