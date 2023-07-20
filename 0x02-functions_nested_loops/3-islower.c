#include "main.h"

/**
 * _islower  - point of entry
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
