#include<stdio.h>

/**
 * main - Entry point
 * Desc: print numbers from 0 to 10
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
