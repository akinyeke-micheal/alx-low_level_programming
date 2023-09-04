#include <stdio.h>
/**
  * main - entry point
  * @argc: cla1
  * @argv: cla2
  * Return: 0 on success else non zero
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

