#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_args = argc - 1;

	printf("%d\n", num_args);
 
	return (0);
}
