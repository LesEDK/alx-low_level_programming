#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that adds positive numbers
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives more than two arguments - 0.
 *         Contains symbols that are not digits - 1.
 */
int main(int argc, char *argv[])
{
int i, d, sum = 0;

for (i = 1; i < argc; i++)
{
for (d = 0; argv[i][d]; d++)
{
if (argv[i][d] < '0' || argv[i][d] > '9')
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
