#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenates the arguments and returns a pointer.
 * @ac: The argc for arguments count.
 * @av: The arguments vector to work on.
 * Return: A pointer to a new string or NULL if failed.
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int arg, subarg;
	int total_length = ac;
	int current_index = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (int arg = 0; arg < ac; arg++)
    {
        for (int subarg = 0; av[arg][subarg]; subarg++)
            total_length++;
    }

    result = (char *)malloc((total_length + 1) * sizeof(char));

    if (result == NULL)
        return (NULL);

    for (int arg = 0; arg < ac; arg++)
    {
        for (int subarg = 0; av[arg][subarg]; subarg++)
        {
            result[current_index++] = av[arg][subarg];
        }
        result[current_index++] = '\n';
    }

    result[total_length] = '\0';

    return (result);
}
