#include <main.h>

/**
 * main - Entry Point
 *
 * Desc: prints the sum of even-value
 * Fibonacci sequence (less than 4m)
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
