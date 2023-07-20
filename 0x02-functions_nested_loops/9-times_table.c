#include "main.h"
#include <stdio.h>

/**
 * times_table - prints times table
 *
 * Return: always 0
 */

void times_table(void)
{
	int i, j;

	int answer;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			answer = i + j;

			if (j == 0)
				printf("%d", answer);
			else
			{
				printf("2%d", answer);
			}
			if (j != 9)
				printf(",");
		}
		printf("\n");
	}
}
