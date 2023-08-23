#include "main.h"
/**
 * _strncpy -  copying a specified number of characters from one string to
 * another string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: Return a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}


