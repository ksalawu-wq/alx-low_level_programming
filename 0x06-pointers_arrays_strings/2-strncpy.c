#include "main.h"

/**
* _strncpy - copies a string
* @dest: string to be copied to
* @src: string to be copied
* @n: number of bytes
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int b;
	int c;

	while (src[a] != '\0')
	a++;

	while (dest[b] != '\0')
	b++;
	for (c = 0; c < n && src[c] != '\0'; c++)
	dest[c] = src[c];

	for (; c < n; c++)
	dest[c] = '\0';
return (dest);

}
