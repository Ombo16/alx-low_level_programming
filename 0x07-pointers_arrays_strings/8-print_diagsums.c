#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix (number of rows/columns).
 */
void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0;
	int sum_diag2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
	sum_diag1 += a[i * size + i];
	}

	for (i = 0, j = size - 1; i < size; i++, j--)
	{
 	sum_diag2 += a[i * size + j];
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
