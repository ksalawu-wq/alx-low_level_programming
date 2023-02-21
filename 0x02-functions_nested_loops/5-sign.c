#include "main.h"
/**
 * print_sign - checks the sign of a number
 * @n: parameter to be checked
 * Return: 1 if number is positive
 * 0 if it is zero
 * and -1 if it is negative
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
}
