#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int main(int argc, char **argv[])
{
int a, cents, b, result;
	int coin[5] = {25, 10, 5, 2, 1};

	result = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
		cents = atoi(argv[1]);
	while (cents > 0)
	{
	for (a = 0 ; a < 5 ; a++)
	{
		b = cents / coin[a];
	if (b >= 1)
	{
		result += b;
		break;
	}
	}
		cents -= b * (coin[a]);
	}
	printf("%d\n", result);
	return (0);
}
