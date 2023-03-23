#include "main.h"

/**
 * _isdigit - verify is the input a number
 *		between 0 and 9
 * @c: the entry of char
 *
 * Return: 1 if the in is 0..9 else return 0
 */

int _isdigit(int c)
{

	if (c >= 48 and c <= 57)
		return (1);
	return (0);
}
