#include "main.h"

/**
 * puts2 - prints the other character of a string
 * @str: takes input
 * Return: 0
 */

void puts2(char *str)
{
	int l = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	t = l -1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
