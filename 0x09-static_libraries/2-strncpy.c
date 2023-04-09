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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
