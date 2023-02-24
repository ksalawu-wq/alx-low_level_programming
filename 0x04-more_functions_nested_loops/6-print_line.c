#include "main.h"
/**
* print_line - prints a line
* Return: void
* @n: variable
*/

void print_line(int n)
{
	int m;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (m = 1; m <= n; m++)
{
_putchar('_');
}
_putchar('\n');
}
}
