#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10, 1);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0, 1);
    printf("%d\n", r);
    r = _pow_recursion(2, 16, 1);
    printf("%d\n", r);
    r = _pow_recursion(5, 2, 1);
    printf("%d\n", r);
    r = _pow_recursion(5, -2, 1);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3, 1);
    printf("%d\n", r);
    return (0);
}
