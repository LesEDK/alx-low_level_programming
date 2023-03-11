#include <stdio.h>
/**
 * main - Program that prints its name
 * @argv:  An array of pointers to the arguments
 * @argc: The number of arguments supplied to the program.
 * Return: 0 (Success)
 */
int main(int __attribute__((__unused__)) arg, char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
