#include "main.h"

/**
 * _strlen_recursion - return string length
 * @s: string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int lo = 0;

	if (*s)
	{
		lo++;
		lo += _strlen_recursion(s + 1);
	}
	return (lo);
}
