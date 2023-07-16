#include <stdio.h>
/**
 * main - prints all numbers of base sixten in lowercase
 *
 * Return: alwasy 0 sucessful
 */
int main(void)
{
	int a;
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	{
		putchar('\n');
	}
}
