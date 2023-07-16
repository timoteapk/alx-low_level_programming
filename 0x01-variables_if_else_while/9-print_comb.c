#include <stdio.h>
/**
 * main - print all combinations of single digits
 *
 * Return: always 0 sucessful
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	{
		putchar('\n');
	}
	return (0)
}

