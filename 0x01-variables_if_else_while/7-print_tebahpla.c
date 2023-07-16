#include <stdio.h>
/**
 * main - prints lowercase alphabets from z to a
 *
 * Return: always (0) successful
 */
int main(void)
{
	char d;
	for (d = 'z', d >= 'a'; d--)
	{
		putchar(d);
	}
	{
		putchar('\n');
	}
	return (0);
}
