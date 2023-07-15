#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdio.h>

/**
 * main - prints last digit sa
 *
 * Return: 0
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX /2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if (last_digit == 0)
	{
		printf("%d and is 0\n", last_digit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
