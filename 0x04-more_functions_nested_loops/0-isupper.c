#include "main.h"

/**
 * _isupper - check if upper
 *
 * @c: takes the char
 *
 * Return: 0 if is not and 1 if it is
 */

int _isupper(int c)
{

	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
