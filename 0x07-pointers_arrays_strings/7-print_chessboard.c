#include "main.h"
/**
 * print_chessboard - Function that prints the chessboard
 * @a: the row of an array
 * Return: void (Nothing)
 */
void print_chessboard(char (*a)[8])
{
int c, d;

for (c = 0; c < 8; c++)
{
for (d = 0; d < 8; d++)
{
if (d == 7)
{
_putchar(a[c][d]);
_putchar('\n');
}
else
_putchar(a[c][d]);
}
}
}
