#include "main.h"

/**
 * _puts - prints a string followed by
 *		new line
 * @str: a pointer for string
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
