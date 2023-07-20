#include "main.h"

/**
 * int _isalpha - checks for alphabetic characters
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
