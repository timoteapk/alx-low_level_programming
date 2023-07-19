#include <stdio.h>
/**
 * main -  prints lowercaase alphabets
 *
 * print_alphabet - function for printing alphabetes
 *
 * Return: always 0 successful
 */

void print_alphabet(void)
{
	for (char letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}

int main(void)
{
	void print_alphabet(void);
	return (0);
}
