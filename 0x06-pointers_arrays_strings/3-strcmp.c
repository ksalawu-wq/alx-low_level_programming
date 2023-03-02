#include "main.h"

/**
* _strcmp - compares strings
* @s1: string to compare
* @s2: string to compare with
*
* Return: difference
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a])
{
	if (s1[a] == '\0')
		return (s1[a] - s2[a]);

	a++;
}
return (s1[a] - s2[a]);
}
