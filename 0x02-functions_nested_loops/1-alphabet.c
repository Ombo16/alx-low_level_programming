#include <unistd.h>

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

int main(void)
{
	print_alphabet();
	return (0);
}
