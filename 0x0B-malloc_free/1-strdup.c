#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{

	char *areturnptr;
	int counta, countb;

	if (str == NULL)
		return (NULL);
	counta = 0;
	while (str[counta] != '\0')
		counta++;

	areturnptr = malloc(sizeof(char) * (counta + 1));

	if (areturnptr == NULL)
		return (NULL);

	for (countb = 0; str[countb]; countb++)
		areturnptr[countb] = str[countb];

	return (areturnptr);
}
