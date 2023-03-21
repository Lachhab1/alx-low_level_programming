#include "main.h"

/**
 * print_alphabet_x10 - print 10 alphapet reusing the
 *		previous defined function print_alphaper
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
