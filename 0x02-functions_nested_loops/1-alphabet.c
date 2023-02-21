#include "main.h"
/**
 * main - Entry point
 * Description: to use print_alphabet to print letters
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter = 'z' letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
