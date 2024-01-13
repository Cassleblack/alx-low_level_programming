#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a list (dlistint_t).
 * @head: pointer to the list head
 * @index: node index to search for, from 0
 * Return: the nth node or return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
