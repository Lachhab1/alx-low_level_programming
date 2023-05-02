#ifndef LISTINT_H
#define LISTINT_H

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* aditionnal functions */
int _putchar(char c);

/* linked list functions */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif
