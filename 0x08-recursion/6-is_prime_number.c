#include "main.h"
#include <stdio.h>

/**
 * is_divisible - an auxillary function to check
 * if a number is divisible by any integer from 'divisor' to 'n'.
 * @n: The number to be checked for divisibility.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_divisible(int n, int divisor)
{
	if (n <= 1)
	{
	return (0);
	}
	if (divisor == 1)
	{
	return (1);
	}
	if (n % divisor == 0)
	{
	return (0);
	}
	else
	{
	return (is_divisible(n, divisor - 1));
	}
}

/**
 * is_prime_number - Checks if a given integer is a prime number.
 * @n: The integer to check for primality.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_divisible(n, n - 1));
}
