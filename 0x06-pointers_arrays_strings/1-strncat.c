#include "main.h"
/**
* _strncat(char *dest, char *src, int n) - concatenates two
*string
* @dest: string to be concatnated to
* @src
*
*/
 
char* _strncat(char* dest, char* src, int n)
{   
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
