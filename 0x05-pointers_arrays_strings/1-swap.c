#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap_int(int *a, int *b)
{
    int temp; // Temporary variable to hold the value during the swap

    temp = *a; // Store the value of 'a' in 'temp'
    *a = *b;   // Assign the value of 'b' to 'a'
    *b = temp; // Assign the original value of 'a' (stored in 'temp') to 'b'
}
