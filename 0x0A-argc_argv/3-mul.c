#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
* Return: 1 if more than three-
* - argument else 0
*/

int main(int argc, char *argv[])
{
	int a;
	int b;
	int mul;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
return (0);
}
