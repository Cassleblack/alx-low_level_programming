#include "lists.h"

/**
 * dlistint_len - number of elements in the double linked list returned
 *
 * @h: list head
 * Return: nodes number
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}