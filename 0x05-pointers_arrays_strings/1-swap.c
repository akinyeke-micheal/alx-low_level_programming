#include "main.h"

/**
  * main -  swaps the values of two given  integers.
  * swap_int -this function swaps the values of two integers
  * @a: integer prototype to be  swap
  * @b: integer prototype to be  swap 
  *
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

