#include "main.h"

/**
 * create_array - function to construct
 * @size: uns int mean the size of the arr
 * @c: the specific char we want to initilise with
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *) malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
