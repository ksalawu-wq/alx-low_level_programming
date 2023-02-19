#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * Description: print possible three digits combinations
 * Return: returns 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = '1'; i <= '9'; i++)
	{
	for (j = '1'; j <= '9'; j++)
	{
		for (k = '1'; k <= '9'; k++)
		{
			if (i < j && j <k)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != '7')
				{
					putchar(',');
						putchar(' ');
				}
			}
		}
	}
}
	putchar('\n');

	return (0);
}
