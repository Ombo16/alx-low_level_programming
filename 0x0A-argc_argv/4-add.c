#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -adds positive numbers and then prints the result
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: if not receive 2 arg, rt error
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int add;

	(void)argv;
	add = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
				printf("Error\n");
				return (1);
				}
			}
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}
