#include "main.h"

/**
 * print_rev - prints a string followed by
 *		new line reversed
 * @str: a pointer for string
 */

void print_rev(char *str)
{
	int i;

	i = _strlen(str);
	for (--i; i > 0; i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
