#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * Return: i
 */

int print_last_digit(int d)
{
	int i;

	i = d % 10;

	if (d < 0)
	i = -i;
	_putchar(i + '0');
	return (i);
}
