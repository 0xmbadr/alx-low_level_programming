#include<stdio.h>

/**
 * main - Entry point
 * Desc: print all alphabet letters except for q and e
 * Return: 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
