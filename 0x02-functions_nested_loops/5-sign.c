#include "main.h"

/**
 * int print_sign - prints signs
 *
 * Return: 0 or 1 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
        }
	else
	{
		_putchar('0');
		return (0);
	}
}