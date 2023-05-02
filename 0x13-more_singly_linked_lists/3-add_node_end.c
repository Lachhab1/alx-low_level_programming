#include "lists.h"

/**
 * add_node_end - new node to the end of list
 * @head: double pointer head to list
 * @str: the string passed to added
 * Return: pointer to the new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}


	while (ptr->next)
	{
		ptr = ptr->next;
	}

	(*ptr).next = new;
	return (*head);
}
