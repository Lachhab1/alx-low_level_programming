#include "list.h"

/**
 * print_list - print non contigues memory set of nodes
 * @h: header point to the list
 * Return: the size of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t i;
	list_t cop = NULL;

	cop = h;
	for (i = 0; i 
	while (cop != NULL)
	{
		if (cop->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", cop->len, cop->str);
		cop = cop->next;
	}
	return (n);
}
