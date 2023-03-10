#include "main.h"
/**
 * _abs - to print the absolute value of an integer
 * @a: parameter to check absolute value of
 * Return: 'a' as absolute value
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
