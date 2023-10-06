#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

int is_positive_number(const char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}

	return (1);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}
