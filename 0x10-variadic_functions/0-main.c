#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(10,30,50);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 124, 902, -15024);
    printf("%d\n", sum);    
    return (0);
}
