#include <stdio.h>
/**
 * main - prints all possible combination of single digits
 *
 * Return: always 0 sucessful
 */
int main(void)
{
	int i, j;
	for (int i = 0; i < 10; i++)
	{
		for (int j =i + 1; j < 10; j++)
		{
			printf("%d%d,", i, j);
		}
	}
	return 0;
}
