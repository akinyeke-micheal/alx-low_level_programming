#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if no natural square root.
 */
int _sqrt_recursion(int n)
{
	int guess;

	if (n < 0)
	{
		return (-1); /* No square root for negative numbers */
	}

	if (n == 0 || n == 1)
	{
		return (n); /* Base case: square root of 0 and 1 is itself */
	}

	guess = _sqrt_recursion(n - 1); /* Start with a guess */

	if (guess * guess > n)
	{
		return (guess - 1); /* Adjust the guess if it's too high */
	}
	else if ((guess + 1) * (guess + 1) > n)
	{
		return (guess); /* Use the guess as the square root */
	}
	else
	{
		return (guess + 1); /* Increment the guess */
	}
}
