#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description : print alphabets but exclude letters q and e
 *
 * Return: returns 0 (success)
 */
int main(void)
{

	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
	else 
	{
	}

	}

	putchar('\n');

	return (0);
}
