#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
* main - Entry point
*Description: Prints a number and it's last digit along with wether it's
)last digit is 0, greater than 5, or less than 6 and not 0.
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand () - RAND_MAX / 2;

if (n % 10 > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
}
else if (n % 10 == 0)
{
printf("Last digit of %i is %i and is 0\n", n % 10);
}
else 
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, % 10);
}
return (0);
}