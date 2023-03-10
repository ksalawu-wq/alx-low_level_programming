#include "main.h"
/**
* _strcat - concatenates string
* @dest: string
* @src: string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int dest_len = 0;

	while (dest[a++])
		dest_len++;
	for (a = 0; src[a]; a++)
		dest[dest_len++] = src[a];
return (dest);

}
