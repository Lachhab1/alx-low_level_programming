#include "lists.h"

/**
 * print_list - print non contigues memory set of nodes
 * @h: header point to the list
 * Return: the size of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
