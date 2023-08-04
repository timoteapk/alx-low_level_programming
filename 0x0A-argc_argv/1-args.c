#include "main.h"
#include <stdio.h>

/**
 * main - a programme for printing number of arguments
 * @n: number of arguments
 * @ar: number of arrays
 *
 * Result: successful (0)
 */

int main(int n, char *ar[])
{
	(void)ar;
	printf ("%d\n", n - 1);

	return (0);
}
