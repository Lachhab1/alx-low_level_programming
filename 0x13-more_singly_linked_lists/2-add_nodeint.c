#include "lists.h"

/**
 * add_nodeint - new node to list
 * @head: double pointer head to list
 * @n: the integer passed to added
 * Return: pointer to the new list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);

}
