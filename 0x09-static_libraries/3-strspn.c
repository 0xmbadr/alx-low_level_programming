#include "main.h"

/**
 * _strspn - a func that gets the
 * length of a prefox substring.
 *
 * @s: pointer to string input
 * @accept: the substring prefix.
 *
 * Return: the number of bytes in the initial segment.
*/

unsigned int _strspn(char *s, char *accept)
{
int bytes = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
bytes++;
break;
}
else if (accept[i + 1] == '\0')
{
return (bytes);
}
}
s++;
}
return (bytes);
}
