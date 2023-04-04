#include "lists.h"
#include <stdio.h>

/**
* listint_len - prints all the elements of a list_t list
* @h: linkedList.
* Return: The number of nodes in h.
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
