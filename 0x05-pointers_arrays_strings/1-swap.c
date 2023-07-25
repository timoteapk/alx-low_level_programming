#include "main.h"

/**
 * swap_int - input
 *
 * @a - takes a input
 * @b - takes b input
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
