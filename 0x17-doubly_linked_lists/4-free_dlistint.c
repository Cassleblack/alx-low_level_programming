#include "lists.h"

/**
 * free_dlistint - set a dlistint_t list free.
 * @head: pointer to the list head
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
