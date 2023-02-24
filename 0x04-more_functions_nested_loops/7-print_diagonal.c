#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer being checked
 * Return: void (Nothing)
 */
void print_diagonal(int n)
{
int b, c;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (b = 0; b < n; b++)
{
for (c = 0; c < b; c++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
