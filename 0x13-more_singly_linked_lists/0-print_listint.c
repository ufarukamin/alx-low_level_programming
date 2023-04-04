#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all the elements of a list_t list
* @h: linkedList.
* Return: The number of nodes in h.
*/
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
