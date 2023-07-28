#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @num: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int num)
{
	int i;
	int j;

	for (i = 0; i < num--; i++)
	{
		j = a[i];
		a[i] = a[num];
		a[num] = j;
	}
}
