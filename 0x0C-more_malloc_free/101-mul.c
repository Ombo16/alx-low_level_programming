#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: if it doesnt receive two arg return error 
 */
int main(int argc, char *argv[])
{
	int i, j, prod;

	if (argc != 3)
		printf("Error\n");
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		prod = i * j;
		printf("%d\n", prod);
	}
	return (0);
}
