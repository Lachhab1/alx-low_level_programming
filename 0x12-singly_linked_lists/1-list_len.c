#include "lists.h"

/**
 * list_len - length of an list
 * @h: the head
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t size;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
