#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address
 * @b: desired value
 * @n: number of bits
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int e = 0;

	for (; n>0; e++)
	{
		s[e] = b;
		n--;
	}
	return(s);
}
