#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - function the natural square root of a number
 * @n: parameter of sqrt
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive function to find square root
 * @n: integer to check
 * @a: iterator
 * Return: interger
 */
int _sqrt(int n, int a)
{
int square = a * a;

if (square > n)
{
return (-1);
}
else if (square == n)
{
return (a);
}
else
return (_sqrt(n, a + 1));
}
