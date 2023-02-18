#include <stdio.h>
/**
 * main - Program that prints single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(% d, a);
		if (a == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
