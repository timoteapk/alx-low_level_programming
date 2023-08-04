#include "main.h"

/**
 * _isupper - letters in uppercase
 * @c: check the char
 *
 * Return: 0 succesful or 1 for unsuccessful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
