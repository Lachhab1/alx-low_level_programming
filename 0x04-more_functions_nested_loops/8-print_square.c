#include "main.h"

/**
 * print_square - print # to form square
 *
 * @size: is the number of # by cote
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
