#include <stdio.h>

/**
 * main - lowercase and uppercase alphabets
 *
 *Return: always 0
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
		putchar(c);
	for (c = 65; c <= 90; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
