#include "main.h"

/**
 * print_alphapet - print caracteres just sitting one by one
 * 				using the function _putchar
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
