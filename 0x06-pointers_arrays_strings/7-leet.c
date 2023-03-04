
#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int dex1 = 0, dex2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[dex1])
{
for (dex2 = 0; dex2 <= 7; dex2++)
{
if (str[dex1] == leet[dex2] ||
str[dex1] - 32 == leet[dex2])
str[dex1] = dex2 + '0';
}
dex1++;
}

return (str);
}
