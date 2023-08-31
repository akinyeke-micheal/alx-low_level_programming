#include "main.h"
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: (1) if n is prime, (0) otherwise.
 */
int is_prime_number(int n)
{
	int divisor;

	if (n <= 1)
	{
		return (0);  /* 0 and 1 are not prime */
	}

	if (n == 2)
	{
		return (1);  /* 2 is prime */
	}

	for (divisor = 2; divisor * divisor <= n; divisor++)
	{
		if (n % divisor == 0)
		{
			return (0);  /* n divisible, not prime */
		}
	}

	return (1);  /* no divisors found, prime */
}
