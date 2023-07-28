#include "main.h"

/**
 * string_toupper - change lowercase to uppercase string
 * @t: pointer
 *
 * Return: n
 */

char *string_toupper(char *t)
{
	int j = 0;

	while (t[j] != '\0')
	{
		if (t[j] >= 'a' && t[j] <= 'z')
			t[j] = t[j] - 32;
		j++;
	}
	return(t);
}
