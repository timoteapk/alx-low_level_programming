#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 
 * main - states if a number is negative postive or zero
 *
 * Return: 0
 */

/* betty style doc for function main goes there */

int main(void)
{
	int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n < 0)
	{
		printf("%d is negative");
        }
        else if (n > 0)
        {
		printf("%d is positive");
        }
        else
        {
		printf("%d is zero");
        }
        return (0);
}
