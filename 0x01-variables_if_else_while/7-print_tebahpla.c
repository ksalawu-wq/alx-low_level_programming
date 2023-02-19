#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print alphabets in reverse orders
 * Return: returns 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
