#include "main.h"
#include <stdio.h>

/**
 * main - all arguments peinted
 * @n: argument number
 * @ar: argument array
 *
 * Return: 0 success
 */

int main(int n, char *ar[])
{
	int a;

	for (a = 0; a < n; a++)
	{
		printf("%s\n", ar[a]);
	}
	return (0);
}
