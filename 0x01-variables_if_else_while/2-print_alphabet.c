#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the alphabet in lowercase, followed by a
 * newline character, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');

    return (0);
}
