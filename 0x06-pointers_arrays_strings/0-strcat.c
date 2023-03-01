#include "main.h"
#include <string.h>
/**
 * _strcat - Function that concatenates two strings
 * @src: string appended to the string dest
 * @dest: string to be concatenated
 * Return: pointer to the string dest
 */
char *_strcat(char *dest, char *src)
{
dest = strcat(dest, src);
return (dest);
}
