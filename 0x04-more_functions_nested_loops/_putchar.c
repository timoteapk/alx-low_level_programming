#include "main.h"
#include <unistd.h>

/**
 * _putchar - point of entry
 *
 * Return: 0 always
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
