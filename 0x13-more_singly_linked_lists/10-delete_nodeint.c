#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given index in a list
 * @head: pointer to the head of the list
 * @index: position of the node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int i;

	if (head == NULL)
		return (-1);
	i = 0;
	current = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (i != index)
	{
		previous = current;
		current = current->next;
		if (current == NULL)
			return (-1);
		i++;
	}
	previous->next = current->next;
	free(current);
	return (1);
}
