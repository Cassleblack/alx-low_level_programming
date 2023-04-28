#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of the list_t list.
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t cassle;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (cassle = 0; str[cassle]; cassle++)
		;

	new->len = cassle;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
