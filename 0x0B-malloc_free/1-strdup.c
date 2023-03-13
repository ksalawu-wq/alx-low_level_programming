#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup - duplicates string
* @str: string
* Return: dup_str
*
*/

char *_strdup(char *str)
{
	char *dup_str;
	size_t len;

	if (str == NULL)
	return (NULL);
	len = strlen(str) + 1;
	dup_str = malloc(len * sizeof(char));

	if (dup_str == NULL)
	return (NULL);

	strcpy(dup_str, str);
	return (dup_str);
}
