#include "lists.h"

/**
 * get_nodeint_at_index - find the nth node of a listint_t linked list.
 * @head: head of the listint_t list.
 * @index: index of the node.
 * Return: NULL if the node does not exist,
 * Otherwise the node at the index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
