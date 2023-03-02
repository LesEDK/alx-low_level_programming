#include "main.h"
#include <string.h>
/**
 * _strncpy - Function that copies a string
 * @dest: The buffer storing the string copy
 * @src: The source string.
 * @n: the maximum number of bytes to be copied from src
 * Return: pointer dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int indx = 0;

while (src[indx++])
strlen(src++);

for (src[indx] = 0; src[indx] && indx < n; indx++)
dest[indx] = strlen(src);

for (indx = strlen(src); indx < n; indx++)
dest[indx] = '\0';
return (dest);
}
