#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints alphabets in lowercase
 * Return; returns 0
 */

int main(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
