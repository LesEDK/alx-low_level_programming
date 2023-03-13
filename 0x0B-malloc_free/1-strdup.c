#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a ointer to the newly allocated space in memory
 * @str: string to be duplicated
 * new_str: new string
 *
 * Return: returns a pointer to a newly allocated space in memory
 * Returns NULL if str = NULL
 */
char *_strdup(char *str)
{
char *new_str;
int i, len = 0;

for (i = 0; str[i]; i++)
len++;

new_str = malloc(sizeof(char) * (len + 1));

if (new_str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
new_str[i] = str[i];

new_str[len] = '\0';
return (new_str);
}
