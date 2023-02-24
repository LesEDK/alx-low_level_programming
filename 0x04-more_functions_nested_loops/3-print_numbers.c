#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line
 *
 * Return: void
 */
void print_numbers(void)
{
int j;

for (j = 0; j < 10; j++)
{
_putchar(j + '0');
}
_putchar('\n');
}
