#include <stdlib.h>

/**
 * malloc_checked -  a func that allocates memory
 *
 * @b: allocated memory
 *
 * Return: A pointer to @b
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
