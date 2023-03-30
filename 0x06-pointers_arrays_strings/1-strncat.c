#include "main.h"

/**
 * _strncat - concat the n src to dest
 *
 * @src: pointer to char
 * @dest: pointer to char
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
