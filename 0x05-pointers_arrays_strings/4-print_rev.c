#include "main.h"
#include <string.h>
/**
 * print_rev - Function that prints string in reverse
 * @s: string being printed
 * Return: void (Nothing)
 */
void print_rev(char *s)
{
int length = 0, index;

while (s[index++])
length++;

for (index = length - 1; index >= 0; index--)
_putchar(s[index]);

_putchar('\n');
}
