#include "main.h"

/**
 * _strlen - returns the length of a string
 * similar to strlen from standard library
 *
 * @s: Input String
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
