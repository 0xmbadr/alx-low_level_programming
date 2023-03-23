#include "main.h"

/**
 * _isdigit - checks if num is between 0 - 9
 *
 * @c: input number
 *
 * Return: 1 if is digit, 0 if not
*/

int _isdigit(int c)
{
	int i = ((c >= '0') && (c <= '9')) ? (1) : (0);

	return (i);
}
