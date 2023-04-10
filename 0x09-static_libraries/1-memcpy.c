#include "main.h"

/**
 * _memcpy - A func that copies @n bytes from memory
 * area @src to memory area @dest
 *
 * @dest: memory area that's copied to
 * @src: memory area that's copied from
 * @n: number of copied bytes
 *
 * Return: pointer to the memory area @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    /* declare a zero or non-ngative integer */
	unsigned int i;
    /* Loop over until n reached */
	for (i = 0; i < n; i++)
	{
    /* replace n bytes with of dest with src */
		dest[i] = src[i];
	}

	return (dest);
}
