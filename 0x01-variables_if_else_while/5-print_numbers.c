#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: To print single digit numbers
 * Return: returns 0 (success)
 */
int main(void)
{

	int n = 1;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');

return (0);
}
