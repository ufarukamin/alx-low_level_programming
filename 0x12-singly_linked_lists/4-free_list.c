#include "lists.h"

/**
* free_list - frees a list_t list.
* @head: pointer to head element of list
* Return: Nothing
*/
void free_list(list_t *head)
{
	list_t *iter;

	iter = head;
	while (head)
	{
		iter = head;
		head = head->next;
		free(iter->str);
		free(iter);
	}
	free(head);
}
