<h1 align="center"> 0x04. C - More functions, more nested loops </h1>

<h3> 0. isupper </h3>

**T**: Write a function that checks for uppercase character.
```c
// Declaration file 
#ifndef FILE_MAIN
#define FILE_MAIN

int _isupper(char c);

#endif
```
```c
int _isupper(char c)
{
  // if (isupper(c)) <ctype.h>
  // if (c >= 65 && c <= 90) 
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
```
```c
// test file 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
```
```bash
# compile and run tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
```
