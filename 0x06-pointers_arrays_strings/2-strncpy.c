#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @dest: The buffer storing the string copy
 * @src: The source string.
 * @n: the maximum number of bytes to be copied from src
 * Return: pointer dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int indx = 0, src_len = 0;

while (src[indx++])
src_len++;

for (src[indx] = 0; src[indx] && indx < n; indx++)
dest[indx] = src[indx];

for (indx = src_len; indx < n; indx++)
dest[indx] = '\0';

return (dest);
}
