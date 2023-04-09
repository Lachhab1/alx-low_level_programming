#include "main.h"

/**
 * _islower - considerring the value of
 *	caractere is lowercase or not
 * @c: check the input
 *
 * Return: if is lower case returs 1 otherwise 0
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	return (0);
}
