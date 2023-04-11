#include "main.h"

/**
 * create_array - function to construct
 * @size: uns int mean the size of the arr
 * @c: the specific char we want to initilise with
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size);
	if (s == NULL)
	{
		return (NULL);
	}
	s[0] = c;
	return (s);
}
