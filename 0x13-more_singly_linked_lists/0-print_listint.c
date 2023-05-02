#include "lists.h"

/**
 * print_listint - print non contigues memory set of nodes
 * @h: header point to the list
 * Return: the size of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
