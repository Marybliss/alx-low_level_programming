#include "main.h"

/**
 * swap_int - swap variable values
 * @a: 1st Pointer
 * @b: 2nd pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
