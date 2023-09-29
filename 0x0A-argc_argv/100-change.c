#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program  calculates minimum number
 * of coins needed to make change.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 if successful, 1 for errors.
 */
int main(int argc, char *argv[]) 
{
	int coins;
 	int cents;
	
	if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    int coins = 0;

    while (cents > 0) {
        if (cents >= 25) {
            cents -= 25;
        } else if (cents >= 10) {
            cents -= 10;
        } else if (cents >= 5) {
            cents -= 5;
        } else if (cents >= 2) {
            cents -= 2;
        } else {
            cents -= 1;
        }
        coins++;
    }

    printf("%d\n", coins);

    return 0;
}
