#include "main.h"
/**
  * factorial - calculates the factorial of the given integer n
  * @n: this is the integer input from main program
  * Return: returns 1 when n is 1 ,returns -1 when n is negative or 0
  */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}

	if (n <= 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
