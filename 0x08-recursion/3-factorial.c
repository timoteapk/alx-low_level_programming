#include "main.h"

/**
 * factorial - returns factorial
 * @a: number too return factorial
 *
 * Return: factorial of a
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial (n-1));
}
