#include "lists.h"

/**
 * listint_len - length of an list
 * @h: the head
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
