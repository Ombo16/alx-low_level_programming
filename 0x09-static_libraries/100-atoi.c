#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string into integer.
 * @s: Type char pointer
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int num, i, sign;

	sign = 1;
	i = num = 0;

	while (((s[i] < '0') || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (((s[i] >= '0') && s[i] <= '9') && s[i] != 0)
	{
		if (num >= 0)
		{
			num = num * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			num = num * 10 - (s[i] - '0');
			i++;
		}
	}
	sign = sign * -1;
	return (num * sign);
}
