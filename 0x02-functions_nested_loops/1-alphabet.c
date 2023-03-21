#include "main.h"

/**
 * main - check the code
 *
 * Description: print alphapet using _putchar
 *
 * Return: Always 0.
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
