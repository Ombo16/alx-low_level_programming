#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all single-digit numbers in base 10,
 * starting from 0 and followed by a new line, 
 * using the putchar function twice.
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar('0' + digit);
	}

	putchar('\n');

	return (0);
}
