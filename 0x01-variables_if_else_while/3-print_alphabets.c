#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char c = 'a', C = 'A';

	while (c <= 'z')
	{
		putchar(c);
	}
	while (C <= 'Z')
	{
		putchar(C);
	}
	putchar('\n');

	return (0);
}
