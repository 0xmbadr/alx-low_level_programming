#include <stdio.h>

/**
 * main - prints its name.
 *
 * @argc: args count
 *
 * @argv: args
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
