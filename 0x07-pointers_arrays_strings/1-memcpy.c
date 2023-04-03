#include "main.h"

/**
 * _memcpy - copy n element of
 *		the src to dest
 * @dest: pointer to chaines table
 * @src: pointer to chaine of what we
 *		copy
 * @n: number of elements of src want cpy
 * Return: Pointer to dest contain n
 *		chaine get by src
 *		and pasted into dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
