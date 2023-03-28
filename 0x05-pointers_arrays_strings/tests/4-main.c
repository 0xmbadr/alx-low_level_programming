#include "./../main.h"

/**
 * main - check the code
 * test - gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c ./tests/4-main.c 4-print_rev.c -o 4-print_rev
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}