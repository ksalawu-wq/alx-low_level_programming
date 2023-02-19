#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * Description: Print all the numbers in base16 in lower case
 * Return: returns 0 (success)
 */
int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	return (0);
}
