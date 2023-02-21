#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char j;
	int i = 0;

	while (i <= 9)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
		_putchar(j);
		}

		i++;
	}
	_putchar('\n');
}
