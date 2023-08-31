#include "main.h"
/**
  * _print_rev_recursion - it prints the character of a string in reverse order
  * @s: string input from main function
  * Return: void
  */


void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
	}
}
