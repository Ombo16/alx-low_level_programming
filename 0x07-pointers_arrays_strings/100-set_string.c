#include "main.h"
#include <stdio.h>
/**
 * set_string - Sprogram sets the the value of a pointer to a char.
 * @s: Pointer to a pointer to char.
 * @to: Pointer to the char to set the value to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

