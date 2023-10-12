#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that search for an integer
 * @array: Type int array pointer
 * @size: Type pointer size of the array
 * @cmp: Type pointer to the function compare values
 * Return: return -1 if size <= 0 or elem no matches -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int a;

    if (array == NULL || cmp == NULL || size < 1)
        return (-1);

    for (a = 0; a < size; a++)
    {
        if (cmp(*(array + a))
            return (a);
    }
    return (-1);
}
