#include "main.h"

/**
 * _memset - A func that fills the first @n bytes of the
 * the memory area pointed  to by s with the constant byte b.
 *
 * @s: memory area to be filled
 * @b: char to be filled with
 * @n: number of bytes to fill with b
 *
 * Return: pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
    /* declar a non-ngative integer */
	unsigned int i;
    /* Loop over until n reached */
	for (i = 0; i < n; i++)
	{
    /* replace n bytes with b */
		s[i] = b;
	}

	return (s);
}
