#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: String #1.
 * @s2: String #2.
 *
 * Return: 0 if equals, else if not
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (diff == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		diff = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (diff);
}
