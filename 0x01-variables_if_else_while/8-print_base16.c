#include <stdio.h>
/**
 * main - Program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	char d;

	for (c = 0; c < 10; c++)
		putchar((c % 10) + '0');
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
