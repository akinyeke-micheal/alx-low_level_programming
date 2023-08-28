#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: the location memory is stored
 *@src: the location  memory is copied
 *@n: the number of bytes
 *
 *Return: copied the dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
