#include "main.h"

/*
* _memset - entry point
* @s: pointer variable
* @b: pointer variable
* @n: number of bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	s[i] = b;
return (s);
}
