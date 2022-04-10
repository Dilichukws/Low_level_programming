#include<stdio.h>
/**
 * main - entry point
 *
 * Description: print lowercase alphabet excluding e and q
 *
 */
int main (void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'a' && c != 'q')
putchar(c);
}

putchar('\n');

return (0);
}
