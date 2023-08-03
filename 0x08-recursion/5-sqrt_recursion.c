#include "main.h"

int actual_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - neutral root
 * @n: num to calculate root
 *
 * Return: neutral root return
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion (n, 0));
}

/**
 * actual_sqrt_recursion - recurses find the natural
 * square root of the number
 * @n: number to calculate the square root
 * @a: iterator
 *
 * Return: result
 */

int actual_sqrt_recursion (int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (1);
	return (actual_sqrt_recursion (n, a + 1));
}
