#include "main.h"

/**
 * check_prime - checks if input is prime
 *
 * @a: input int
 * @b: input int
 *
 * Return: int
 */
int check_prime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check_prime(a + 1, b));
}

/**
 * is_prime_number - check if input int is prime number
 *
 * @n: input int
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
