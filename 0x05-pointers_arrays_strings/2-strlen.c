#include "main.h"

/**
 * _strlen - finds the length of the string
 * @s: pointer for the string to be checked
 * Return: void
 */

int _strlen(char *s)
{
int count = 0; // 1 2 3 4 5
while (s[count] != '\0')
{
count++;
}
return (count); 
}
