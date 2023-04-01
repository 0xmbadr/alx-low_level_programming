<h1 align="center">0x07. C - Even more pointers, arrays and strings</h1>

<h3>Notes</h3>

> A **pointer to a pointer** or **A Double Pointer** is a pointer that holds the address of another pointer.

- It's a form of multiple indirection, or a chain of pointers.

![](./images/pointer-to-pointer.png)

A variable that is a pointer to a pointer must be declared with `**`.

```c
int **p2;
```

Example:
```c
#include <stdio.h>

int main () {
    int variable;
    int *p1;
    int **p2; /* declaring a double pointer */

    variable = 3000;

    p1 = &variable; /* store address of variable into p1 */
    p2 = &p1; /* store address of p1 into p2*/

    /* accessing value of variable */
    printf("variable = %d\n", variable);
    printf("value of variable using p1 = %d\n", *p1);
    printf("value of variable using p2 = %d\n", **p2);

    /* accessing address of variable */
    printf("Addres of variable = %p\n", &variable);
    printf("Address of variable using p1 = %p\n", p1);
    printf("Address of variable using p2 = %p\n", *p2);    

    /* accessing value of p1 */
    printf("Value of Pointer p1 = %p\n", p1);
    printf("Value of Pointer p1 using p2 = %p\n", *p2);

    /* accessing address of p1 */
    printf("Addres of Pointer p1 = %p\n", &p1);
    printf("Address of Pointer p1 using p2 = %p\n", p2);

    /* accessing double pointer value and address */
    printf("Value of Pointer p2 = %p\n", p2);
    printf("Address of Pointer p2 = %p\n",&p2);  

    return 0;
}
```
Possible Output:
```
variable = 3000
value of variable using p1 = 3000
value of variable using p2 = 3000

Addres of variable = 0x7ffc331969b4
Address of variable using p1 = 0x7ffc331969b4
Address of variable using p2 = 0x7ffc331969b4

Value of Pointer p1 = 0x7ffc331969b4
Value of Pointer p1 using p2 = 0x7ffc331969b4

Addres of Pointer p1 = 0x7ffc331969b8
Address of Pointer p1 using p2 = 0x7ffc331969b8

Value of Pointer p2 = 0x7ffc331969b8
Address of Pointer p2 = 0x7ffc331969c0
```
To put it simply: 
```
variable == *p1 == **p2
&variable == p1 == *p2
             &p1 == p2
```
