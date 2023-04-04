#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 -  frees a listint_t list.
* @head: Pointer to the first of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *free_node, *node;

	if (head == NULL)
		return;
	node = *head;
	while (node)
	{
		free_node = node;
		node = node->next;
		free(free_node);
	}
	*head = NULL;
}
