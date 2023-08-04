#include "main.h"
/**
 *_memcpy - a function that copies memory area to new location
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: new memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;


	for (; a < b; a++)
	{
		dest[a] = src[b];
		n--;
	}
	return (dest);
}

