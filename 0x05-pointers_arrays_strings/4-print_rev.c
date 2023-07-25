#include "main.h"

/**
 * print_rev - prints the reverse of a statement
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int di = 0;
	int i;

	while (*s != '\0')
	{
		di++;
		s++;
	}
	s--;
	for (i = di; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
