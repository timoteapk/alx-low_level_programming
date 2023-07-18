#include <stdio.h>
#include <main.h>
/**
 * main -  prints lowercaase alphabets 
 *
 * Return: always 0 successful
 */
void print_alphabet(void)
{
	for(char i = 'a'; i <= 'z'; i++);
	{
		putchar(i);
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet(void);
	return (0);
}
