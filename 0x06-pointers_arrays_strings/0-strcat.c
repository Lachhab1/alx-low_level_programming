#include "main.h"

/**
 * _strcat - concatenate the second to
 *		the first
 * @src: the chaine we want to concat with
 * @dest: the chaine we get after
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
