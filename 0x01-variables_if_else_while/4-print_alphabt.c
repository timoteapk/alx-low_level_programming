#include <stdio.h>

/**
 * main - alphabets without e and q
 *
 *Return: always 0
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		if (c != 101 && c != 113)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
