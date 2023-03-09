#include "main.h"
/**
 * _pow_recursion - Function that returns value x to the power y
 * @x: value raised to the power y
 * @y: power to the integer x
 * Return: value of x to the power of y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
return (x * _pow_recursion(x, y - 1));
}
