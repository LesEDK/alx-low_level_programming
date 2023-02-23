#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @n: input numberas an integer
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
int l = n % 10;

if (l < 0)
{
_putchar(-l + 40);
return (-l);
}
else
{
_putchar(l + 40);
return (l);
}
}
