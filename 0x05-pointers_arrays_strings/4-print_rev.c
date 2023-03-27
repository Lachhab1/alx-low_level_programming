#include "main.h"

/**
 * print_rev - prints a string followed by
 *		new line reversed
 * @str: a pointer for string
 */

void print_rev(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (i = i; i > 0; i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
