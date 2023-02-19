#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * Description: To print alphabets in lower caes and upper case
 * Return: returns 0 (success)
 */

int main(void)
{
	int ch, al;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (al = 'A'; al <= 'Z'; al++)
	{
		putchar(al);
	}
	putchar('\n');

	return (0);
}
