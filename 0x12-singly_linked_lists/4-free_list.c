#include "lists.h"

/**
 * free_list - free the alocated res
 * @h: the head of the list
 */

void free_list(list_t *head)
{
	list_t tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
