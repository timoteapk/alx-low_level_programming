#include <stdio.h>
/**
 * main - print all combinations of single digits
 *
 * Return: always 0 sucessful
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar (',');
			putchar (' ');
		}
		++i;
	}
	putchar ('\n');
	return (0);
}
