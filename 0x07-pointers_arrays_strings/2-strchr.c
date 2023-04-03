#include "main.h"

/**
 * _strchr - A func that locates a char in a string.
 *
 * @s: Input String.
 * @c: char to be located
 *
 * Return: pointer to first occurance of @c
 * or NULL if @c is not found.
 */


char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}

return ('\0');
}


