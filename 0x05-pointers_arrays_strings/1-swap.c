#include "main.h"
/**
 * swap_int - Function that swaps the values of two intergers
 * @a: integer being swaped
 * @b: interger being
 * Return: void (Nothing)
 */
void swap_int(int *a, int *b)
{
int abc = *a;
*a = *b;
*b = abc;
}
