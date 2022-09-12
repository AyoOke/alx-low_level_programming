#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "programming is positive, zero, or negative 
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%! is positive\n", n);
}
else if (n == 0)
{
printf("%! is zero\n", n);
}
else if (n < 0)
{
printf("%! is negative\n", n);
}
return (0);
}
