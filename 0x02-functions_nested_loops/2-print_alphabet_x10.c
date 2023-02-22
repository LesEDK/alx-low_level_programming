#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase
 * Return: No return
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		_putchar(i);
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
