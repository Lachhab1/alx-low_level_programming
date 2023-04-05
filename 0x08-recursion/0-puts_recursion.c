#include "main.h"

/**
 * _puts_recursion - print a string
 *
 * @s: pointer to char
 */

void _puts_recursion(char *s)
{
	if (s == '\0')
		return;
	_puthchar(s);
	_puts_recursion(++s);
}
