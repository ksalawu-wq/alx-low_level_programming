#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: To print the last number of a value
 * Return: returns 0
 */

int main(void)
{
	int n;
	int l = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, m);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else if (n < 6 && m != 0)
	{
		printf("Lsat digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
