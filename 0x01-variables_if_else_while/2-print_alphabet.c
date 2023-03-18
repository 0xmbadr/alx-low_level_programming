#include <stdio.h>

/**
 * main - Entry point.
 * Desc: print all alphabet letters.
 * Return: 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
