#include <stdio.h>

/**
 * main - prints nums of args passed.
 *
 * @argc: args count.
 *
 * @argv: args
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
