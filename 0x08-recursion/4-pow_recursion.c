#include "main.h"
/**
  * _pow_recursion - this calculates the value of x ^ y
  * @x: integer input from the main function
  * @y: integer input from the main function
  * Return: returns -1 if y is negative,1 when y is 0 and returns the value
  * of the recusive function if y is > 1 till the base is reached
  */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
