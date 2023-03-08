#include <math.h>

/**
* square_root - defines square root
* @b: input
* @m: input
* Return: square root
*/

int square_root(int b, int m)
{
	if ((m * m) == b)
	return (m);

	if (m == b / 2)
	return (-1);

	return (square_root(b, m + 1));
}

/**
* _sqrt_recursion - Entry point
* @n: input
* Return: square root recursion
*/

int _sqrt_recursion(int n)
{
	int m = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
	return (1);

	return (square_root(n, m));
}
