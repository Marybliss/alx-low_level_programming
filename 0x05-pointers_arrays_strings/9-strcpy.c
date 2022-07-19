#include "main.h"

/**
 * char *_strcpy - copy the string pointed to by src
 * include the terminating null byte (\0), to buffer.
 * @dest: first pointer
 * @src: second pointer
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
