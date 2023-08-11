#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints single digit numbers using only putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}

