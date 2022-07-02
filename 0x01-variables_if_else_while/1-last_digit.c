#include <stdlib.h>

#include <time.h>

/*
 *This program will assign a random number to the variable n each time it is executed.
 *
 *
 * */
int main(void)

{

int n;
srand(time(0));

n = rand() - RAND_MAX / 2;

/* your code goes there */
printf("Last digit of %d is " ,n)
if (n > 5)
{
	printf("is greater than 5");
}
if ( n == 0)
{
	printf("0");
}
if (n < 6 && n! = 0)
{
	printf("less than 6 and not 0");
}
print("\n");
return (0);

}
