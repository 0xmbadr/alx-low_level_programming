#include "./../main.h"
#include <stdio.h>

/**
 * main - check the code
 * test - cc -Wall -pedantic -Werror -Wextra -std=gnu89 ./tests/2-main.c 2-strlen.c -o 2-strlen
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}