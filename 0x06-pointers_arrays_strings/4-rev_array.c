#include "main.h"

/**
 * reverse_array -  A function that reverses 
 * the content of an array of integers.
 *
 * @a: Input Array.
 * @n: num of element in Array.
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
