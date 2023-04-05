#include "main.h"

/**
 * _puts_recursion - print a string
 *
 * @s: pointer to char
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puthchar(*s);
	_puts_recursion(s + 1);
}
