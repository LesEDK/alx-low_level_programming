#include <stdio.h>
/**
 * main - Program that prints all srguments in receives
 * @argc: stores number of command line arguments
 * @argv: array of character pointers listing all arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
