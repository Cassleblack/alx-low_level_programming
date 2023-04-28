#include <stdio.h>
#include "lists.h"

/**
 * printslist - Prints all the elements of list_t list.
 * @h: singly linked list.
 *
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t cassle;

	cassle = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		cassle++;

	}
	return (cassle);
}
