#include"main.h"

/**
 * _isalpha - checks if a character is
 * both lowercased or uppercased
 *
 * @c: takes input from other functions.
 *
 * Return: 1 if true otherwise 0.
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
