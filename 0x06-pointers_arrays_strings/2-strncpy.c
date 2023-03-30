#include "main.h"
/**
*  _strncpy - A func that works exactly like 
* the standard library `strncpy`.
*
* @dest: dest string.
*
* @src: Source string.
*
* @n: num of byte to be copied
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
