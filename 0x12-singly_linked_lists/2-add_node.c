#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node beginning of the list_t
 * @head: poiner to structure
 * @str: string
 * Return: the address of the element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int lenght = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	newNode->len = lenght;
	if (*head == NULL)
		newNode->next = *head;
	if (*head == NULL)
		newNode->next = NULL;
	*head = newNode;
	return (*head);
}
