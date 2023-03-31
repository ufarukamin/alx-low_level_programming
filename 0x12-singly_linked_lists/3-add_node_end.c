#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a new node at the end of a list_t list.
* @head: pointer that points the head
* @str: pointer to string to add
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *iter;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	temp->len = length;
	temp->str = strdup(str);
	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temp->next = NULL;
		iter = *head;
		while (iter->next)
			iter = iter->next;
		iter->next = temp;
	}
	return (temp);
}
