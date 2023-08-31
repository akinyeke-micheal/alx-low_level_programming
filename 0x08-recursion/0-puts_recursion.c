#include "main.h"
/**
  * _puts_recursion - a function that prints a string
  * @s : this is the strings input taken as a derefrenced pointer of s
  * i.e it's pointing to the characters
  * Return: void
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
