#include "main.h"
/**
 * _strchr - Entry
 * @s: input
 * @c: input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int h = 0;


	for (; s[h] >= '\0'; h++)
	{
		if (s[h] == c)
			return (&s[h]);
	}
	return (0);
}
