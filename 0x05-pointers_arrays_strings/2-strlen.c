#include "main.h"

/**
 * _puts - prints a string in stdout
 * @str: string to print
 *
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
