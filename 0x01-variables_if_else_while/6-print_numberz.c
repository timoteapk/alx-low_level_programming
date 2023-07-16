#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints all single numbers of base ten from zero
 *
 * return: always 0
 */
int main(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	{
		putchar('\n');
	}
	return (0);
}
