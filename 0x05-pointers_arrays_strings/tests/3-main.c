#include "./../main.h"

/**
 * main - check the code
 * test - gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c ./tests/3-main.c 3-puts.c -o 3-puts
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}