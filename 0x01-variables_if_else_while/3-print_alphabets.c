#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase and then uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;

	char c;

	b = 'a';
	c = 'A';
	while
		(b <= 'z') {
			putchar(b);
			b++;
		}
	while
		(c <= 'Z') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
