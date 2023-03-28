#include "./../main.h"
#include <stdio.h>

/**
 * main - check the code
 * test - gcc -Wall -pedantic -Werror -Wextra -std=gnu89 ./tests/1-main.c 1-swap.c -o 1-swap
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}