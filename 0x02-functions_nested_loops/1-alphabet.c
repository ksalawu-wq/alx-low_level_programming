#include "main.h"
/**
 * main - Entry point
 * Description: to use print_alphabet to print letters,
 * followed by a new line
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++
	}
	_putchar('\n');
}
