#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First Integer Pointer.
 * @b: Second Integer Pointer.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
