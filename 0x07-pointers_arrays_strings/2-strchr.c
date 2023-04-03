#include "main.h"

/**
 * _strchr - locat a chaine into string
 *
 * @s: our string where we want to look the
 *		the character c
 * @c: the charcter that we want to look for
 *		in the string s
 *
 * Return: pointer for the first occu and null
 *		if not
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (s == '\0')
		return (s);
	return (NULL);
}
