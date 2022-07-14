#include "main.h"

/**
 * puts_half - prints a string
 * @str: pointer
 * Return: void
 */
void puts_half(char *str)
{
int len, n, i;

len = 0;

while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
_putchar(str[i]);
}
}
else if (len % 2)
{
for (n = (len - 1) / 2; n < len - 1; n++)
{
_putchar(str[n + 1]);
}
}
_putchar('\n');
}

