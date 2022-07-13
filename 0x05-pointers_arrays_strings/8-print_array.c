#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: first pointer
 * @n: second pointer
 * Return: Always 0.
 */

void int_array(int *a, int n)
{
int i;
for ( i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n-1)
{
printf(",");
printf(" ");
}
}
printf("\n");
}
