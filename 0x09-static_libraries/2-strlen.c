#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: strig
 * Return: lo
 */
int _strlen(char *s)
{
	int lo = 0;


	while (*s != '\0')
	{
		lo++;
		s++;
	}


	return (lo);
}
