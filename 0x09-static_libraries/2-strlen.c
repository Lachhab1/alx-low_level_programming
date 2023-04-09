#include "main.h"

/**
 * _strlen - the length of a chaine
 *
 * @s: pointer for a string
 *
 * Return: integer for the length
 */

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}

	return (n);
}
