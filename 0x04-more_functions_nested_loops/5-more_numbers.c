#include "main.h"
/**
 * more_numbers - prints 0 to 9
 *
 * Return: void
 */

void more_numbers(void)
{
	char a, b;
	int c = 0;

	while (c < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;
			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar(b + '0');
		}
		_putchar('\n');
		c++;
	}
}
