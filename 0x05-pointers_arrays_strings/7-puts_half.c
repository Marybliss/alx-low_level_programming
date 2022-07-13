#include "main.h"
/**
 *puts_half - functions that prints half of a string.
 *
 *@str: input string
 */

void puts_half(char *str)
{
int len; // index
int counter; //half
for (len = 0; str[len] != '\0'; len++)
{
}
counter = (len + 1) / 2;
while (str[counter])
{
_putchar(str[counter]);
counter++;
}
_putchar('\n');
}
