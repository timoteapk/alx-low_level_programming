#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastnum = n % 10;
	if (lastnum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
	}
	else if (lastnum == 0)
        {
                printf("Last digit of %d is %d and is zero\n", n, lastnum);
        }
	else if (lastnum < 6 && lastnum != 0)
        {
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
        }
	return (0);
}
