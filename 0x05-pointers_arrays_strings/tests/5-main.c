#include "./../main.h"
#include <stdio.h>

/**
 * main - check the code
 * test - gcc -Wall -pedantic -Werror -Wextra -std=gnu89 ./../5-main.c 5-rev_string.c -o 5-rev_string
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}