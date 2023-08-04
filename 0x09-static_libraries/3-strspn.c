#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t = 0;
	int f;


	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
			if (*s == accept[f])
			{
				t++;
				break;
			}
			else if (accept[f + 1] == '\0')
				return (t);
		}
		s++;
	}
	return (t);
}
