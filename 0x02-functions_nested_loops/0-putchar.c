#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: print caracteres by _puthar included in main.h
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
