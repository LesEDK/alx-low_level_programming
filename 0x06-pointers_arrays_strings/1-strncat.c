#include "main.h"
#include <string.h>
/**
 * _strncat - Function that concatenates two strings
 * @src: string appended to the string dest
 * @dest: string to be appended upon
 * @n: The number of bytes from src to be appended to dest.
 * Return: pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;

while(dest[a] != '\0')
{
a++;
}
while(b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
