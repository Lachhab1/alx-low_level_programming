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

	for (i = 0; i < strlen(c); i++)
	{
		_putchar(c[i]);
	}

	return (0);
}
