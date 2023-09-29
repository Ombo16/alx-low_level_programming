#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * and prints the result.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 if successful, 1 if there are not enough arguments.
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
	}
	return (0);
}
