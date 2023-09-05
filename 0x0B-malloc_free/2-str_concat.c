#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cct;
	int y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	y = z = 0;
	while (s1[y] != '\0')
		y++;
	while (s2[z] != '\0')
		z++;
	cct = malloc(sizeof(char) * (y + z + 1));

	if (cct == NULL)
		return (NULL);
	y = z = 0;
	while (s1[y] != '\0')
	{
		cct[y] = s1[y];
		y++;
	}

	while (s2[z] != '\0')
	{
		cct[y] = s2[z];
		y++, z++;
	}
	cct[y] = '\0';
	return (cct);
}

