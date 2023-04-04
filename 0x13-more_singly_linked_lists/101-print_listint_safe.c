#include "lists.h"
#include <stdio.h>

/**
* print_listint_safe - prints the nodes of list
* If the function fails, exit the program with status 98.
* @head: pointer to the first node
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *i = head, *j = head;

	if (head == NULL)
		exit(98);

	while (i && j && j->next && head)
	{
		i = i->next;
		j = j->next->next;
		if (i == j)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	head = NULL;
	return (nodes);
}
