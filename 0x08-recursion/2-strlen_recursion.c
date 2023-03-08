#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: string to in which its length is to returned
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
int n = 0;

if (*s)
{
n++;
n = n + _strlen_recursion(s + 1);
}
return (n);
}
