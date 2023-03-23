#include "main.h"
/**
 * _isupper - a func that checks if character
 * is uppercase.
 * @c: the character to be checked
 * Return: 1 if true, 0 if not
 */

int _isupper(char c)
{
    /* checks if c is in range of ascii uppercase*/
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
