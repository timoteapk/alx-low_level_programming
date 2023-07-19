#include "main.h"
#include <unistd.h>

/**
 * main - point of entry
 *
 * Return: 0 sucessful always
 */

int _putchar(char c)
{
	return write (1, &c, 1);
}
