#include <unistd.h>

/* Declaration of the print_alphabet function */
void print_alphabet(void);

/**
 * main - Entry point of the program
 *
 * Description: This program calls the print_alphabet function to print
 * the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet();  /* Call the print_alphabet function */
    return (0);
}

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }

    write(1, "\n", 1);
}
