#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Check if a string is a positive number.
 * @str: The string to check.
 * Return: 1 if it's a positive number, 0 otherwise.
 */
int is_positive_number(const char *str)
{
    if (str == NULL || *str == '\0')
        return 0;

    while (*str)
    {
        if (!isdigit(*str))
            return 0;
        str++;
    }

    return 1;
}

/**
 * main - multiplies two positive numbers.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: if not receive 2 arg, rt error
 */
int main(int argc, char *argv[])
{
    int num1, num2, mul;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }
    else if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    mul = num1 * num2;
    printf("%d\n", mul);

    return (0);
}
