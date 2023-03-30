#include "main.h"

/**
 * _strncpy - copy n car to dest
 * @dest: the destination chaine
 * @src: what we want to copy
 * @n: the n caracter
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0, j = 0; i < n; i++, j++)
	{
		dest[i] = src[j]
	}

	return (dest);
}
