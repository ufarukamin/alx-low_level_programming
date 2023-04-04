#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: pointer that points the head
* @n: number to add
* Return: address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tail;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = node;
	}
	return (node);
}
