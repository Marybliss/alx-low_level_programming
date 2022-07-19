#include "main.h"

/**
 * puts_half - prints a string
 * @str: pointer
 * Return: void
 */
<<<<<<< HEAD
void puts_half(char *str)
{
int len, n, i;

len = 0;

=======

void puts_half(char *str)
{
int len, n, i;
len = 0;
>>>>>>> 65b3b9e369f18e59a3dc57611c9da5f8b86fe958
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
<<<<<<< HEAD
=======
for (i = len / 2; str[i] != '\0'; i++)
{
>>>>>>> 65b3b9e369f18e59a3dc57611c9da5f8b86fe958
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
<<<<<<< HEAD

=======
>>>>>>> 65b3b9e369f18e59a3dc57611c9da5f8b86fe958
