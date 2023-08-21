#include "main.h"
/**
 * _puts - prints out  a string, followed by a new lin as standard output
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}


