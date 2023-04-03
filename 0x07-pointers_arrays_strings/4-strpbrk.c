#include "main.h"

/**
 * *_strpbrk - A func that searches a string for any of a set of bytes.
 *
 * @s: Input string to locate in.
 * @accept: Input string having the bytes to look for
 *
 * Return: pointer to the byte in @s
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; *s != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
{
return (s);
}
}
s++;
}
return ('\0');
}

