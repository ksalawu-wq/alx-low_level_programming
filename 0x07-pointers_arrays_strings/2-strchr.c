#include "main.h"

/**
* _strchr - finds character in string
* @s: string
* @c: characyer to find
* Return: pointer to character
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	while (s[i] == c)
	return (s + i);
	}
return ('\0');
}
