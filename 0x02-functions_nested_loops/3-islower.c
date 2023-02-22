#include "main.h"
/**
 * _islower - checks if char is lowercase
 * @c: is the char being checked
 * Return: 1 if  char is lowercase, otherwise is 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
