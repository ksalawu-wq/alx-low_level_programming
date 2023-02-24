#include "main.h"
/**
* print_diagonal - prints a diagonal line
* @n: variable
* Return: void
*/

void print_diagonal(int n)
{
	int m, o;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (m = 1; m <= n; m++)
{
for (o = 1; o < m; o++)
{
_putchar(' ');
}
{
_putchar('\\');
_putchar('\n');
}
}
}
}
