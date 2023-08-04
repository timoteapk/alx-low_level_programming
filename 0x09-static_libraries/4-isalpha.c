#include "main.h"
		
/**
 * _isalpha - checks for alphabetic character
 * @c: the aphablete checker
 * Return: 1 for alphabete, 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
