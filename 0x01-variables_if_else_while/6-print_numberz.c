#include<stdio.h>

/**
 * main - Entry point
 * Description: print digits from 0-9 int variable.
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 58)
	{
		putchar(digit);
	    digit++;
	}
	putchar('\n');
	return (0);
}
