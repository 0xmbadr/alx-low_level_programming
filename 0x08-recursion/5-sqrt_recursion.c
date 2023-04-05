
#include "main.h"

/**
 * check_sqrt - actual implementation of sqrt
 *
 * @a: input integer
 * @b: input integer
 *
 * Return: int
 */
int check_sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check_sqrt(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: input integer
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_sqrt(1, n));
}
