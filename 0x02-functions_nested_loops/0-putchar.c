#include"main.h"

/**
 * main - Entry point
 *
 * Desc: prints using _putchar prototype.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		_putchar(str[c]);
	_putchar('\n');

	return (0);
}
