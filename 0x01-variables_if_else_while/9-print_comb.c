#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n'); /* Print a newline character after the sequence */

	return (0);
}


