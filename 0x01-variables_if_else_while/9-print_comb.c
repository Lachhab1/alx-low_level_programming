#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + 48)

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	return (0);
}
