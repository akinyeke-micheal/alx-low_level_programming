#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point
  * @argc: cla1
  * @argv: cla2
  * Return: 0 on success else non zero
  */
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int a, b, c;
		    a = atoi(argv[1]);
		    b = atoi(argv[2]);
		    c = a * b;
		    printf("%d\n", c);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}

