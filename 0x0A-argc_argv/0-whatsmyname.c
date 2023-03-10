#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* @argc: integer
* @argv: character pointer
* Return: 0
*/

int main(int argc, char *argv[])
{
int a = 0;

	while (argv[0][a] != '\0')
{
	putchar(argv[0][a]);
	a++;
}
putchar('\n');
(void)argc;
return (0);
}
