#include<stdio.h>

/**
 * main - Entry point
 * Desc: print letters from a-z in reverse
 * Return: 0 (Success)
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
