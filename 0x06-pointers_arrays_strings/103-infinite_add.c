#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Add two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: A pointer to the result (r) or 0 if the result cannot be stored.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0;
    int sum, index;

    while (n1[len1])
        len1++;
    while (n2[len2])
        len2++;

    if (size_r <= len1 || size_r <= len2)
        return (0);


    len1--;
    len2--;
    r[size_r] = '\0';
    index = size_r - 1;

    while (len1 >= 0 || len2 >= 0 || carry)
    {
        int num1 = (len1 >= 0) ? (n1[len1] - '0') : 0;
        int num2 = (len2 >= 0) ? (n2[len2] - '0') : 0;

        sum = num1 + num2 + carry;
        carry = sum / 10;
        r[index] = (sum % 10) + '0';

        len1--;
        len2--;
        index--;
    }

    if (index < 0)
        return (0);

    if (index > 0)
        r = r + index + 1;

    return r;
}
