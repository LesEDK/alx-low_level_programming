#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	for (r = 0; r < 10; r++)
		putchar((r % 10) + '0');
	putchar('\n');
	return (0);
}
