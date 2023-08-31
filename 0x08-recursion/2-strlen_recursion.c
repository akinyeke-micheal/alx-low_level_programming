#include "main.h"
/**
  * _strlen_recursion - this counts the number of characters in a given string
  * @s: this is the string input pointer,that holds the string
  * Return: it retuns the recusive 1 + the value of the stack of recursion
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
