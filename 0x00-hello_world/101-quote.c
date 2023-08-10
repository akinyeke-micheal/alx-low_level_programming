#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point
 *
 * Description: Prints a specific message to standard error using write syscall
 * Return: Always 1
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	syscall(SYS_write, STDERR_FILENO, message, 47); /* 47 is the length of the message */
	syscall(SYS_write, STDERR_FILENO, "\n", 1);     /* Print a newline character */

	return (1);
}

