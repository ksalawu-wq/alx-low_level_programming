#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*
 * main - entry point
 * Description: prints an if else statement for a positive or a negative integer.
 * Return: returns 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}