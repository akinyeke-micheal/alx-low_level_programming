#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/* Print uppercase alphabet */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');  /* Print a newline */

	return (0);
}

