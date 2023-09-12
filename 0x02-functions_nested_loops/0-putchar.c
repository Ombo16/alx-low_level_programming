#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints "_putchar" followed by a new line
 * using the _putchar function and returns 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char putchar_char;
    char newline_char;

    putchar_char = '_';
    write(1, &putchar_char, 1);  /* Using write to print a single character */
    putchar_char = 'p';
    write(1, &putchar_char, 1);
    putchar_char = 'u';
    write(1, &putchar_char, 1);
    putchar_char = 't';
    write(1, &putchar_char, 1);
    putchar_char = 'c';
    write(1, &putchar_char, 1);
    putchar_char = 'h';
    write(1, &putchar_char, 1);
    putchar_char = 'a';
    write(1, &putchar_char, 1);
    putchar_char = 'r';
    write(1, &putchar_char, 1);

    newline_char = '\n';
    write(1, &newline_char, 1);  /* Printing a new line */

    return (0);
}
