#include "main.h"

/**
 * _strcmp - compare two chaines
 *
 * @s1: chaine 1
 * @s2: chaine 2
 *
 * Return: 0 if equals 1 if first larger
 *		and -1 if shorter
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
