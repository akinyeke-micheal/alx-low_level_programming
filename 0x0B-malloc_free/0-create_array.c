#include <stdlib.h>
/**
  * create_array - creates array
  * @size: size of the array
  * @c: character of the array
  *
  * Return: array
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int counter;

	array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
		array[counter] = c;
	return (array);
}
