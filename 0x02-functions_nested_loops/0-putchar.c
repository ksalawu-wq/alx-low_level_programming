#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 * Description: To print the program _putchar
 * Return: returns ) (success)
 */
int main(void)
{
	char str[] = "_putchar"
	int i = 0;

	while (str[i] != '\0')
	{
		char a = str[i];

		_putchar(a);
		i++;
	}
	return (0);
}
