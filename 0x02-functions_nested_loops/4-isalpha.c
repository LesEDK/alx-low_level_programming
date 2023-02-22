#include "main.h"
/**
 * _isaphla - Checks for alphabetic character(lowercase or uppercase)
 * @c: is the character being checked
 * Return: 1 if char is alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
