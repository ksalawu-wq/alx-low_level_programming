#include "main.h"
/**
 * print_numbers - function that print numbers
 *
 * Return: 0
 */

void print_numbers(void)
{
	char a = 0;

	while (a <= 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
