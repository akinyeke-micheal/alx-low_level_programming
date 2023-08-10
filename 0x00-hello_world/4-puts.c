#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message and outputs to stderr.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("\"Programming is like building a multilingual puzzle\n");

	/* Print to stderr */
	fprintf(stderr, "[Anything]\n");

	return (0);
}

