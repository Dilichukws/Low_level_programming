#include "main.h"
/**
 * _isdigit - checks if the no is b/n 0 to 9
 * @c: input no
 * Return: 1 if it's a number (0-9, or 0 in other cases.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

