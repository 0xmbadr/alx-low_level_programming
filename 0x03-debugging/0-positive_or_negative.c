#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Desc: Print whether a number is positive, negative or zero.
 * Return: Zero value
 */

int positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
	return (0);
}
