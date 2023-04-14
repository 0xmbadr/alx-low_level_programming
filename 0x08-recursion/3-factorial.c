#include "main.h"
/**
 * factorial - func to return the factorial of a given number
 *
 * @n: input number
 *
 * Return: factorial of @n
 */

int factorial(int n)
{
if (n == 0)

return (1);

else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}