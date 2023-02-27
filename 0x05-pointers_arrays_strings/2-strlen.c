#include "main.h"
/**
* _strlen - length of string
* @s: variable
* Return: n
*/

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		*s++;
	}
return (n);
}
