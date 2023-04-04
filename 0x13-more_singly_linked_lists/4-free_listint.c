#include <stdlib.h>
#include "lists.h"

/**
* free_listint -  frees a listint_t list.
* @head: Pointer to the first of the list
*/
void free_listint(listint_t *head)
{
	listint_t *free_node;

	while (head != NULL)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
}
