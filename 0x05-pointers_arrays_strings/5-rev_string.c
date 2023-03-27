#include "main.h"

/**
 * rev_string - prints a string followed by
 *              new line reversed
 * @s: a pointer for string
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i / 2; j++)
	{
		temp = s[i];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
	_putchar('\n');
}
