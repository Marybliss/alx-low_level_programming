#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string in stdout
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
int i; // positions of each string
for ( i = 0; str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
// puts(str);
}
