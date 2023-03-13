#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* str_concat - concatenates strings
* @s1: input
* @s2: input
* Return: new_str
*/

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, len3;
	char *new_str;

	if (s1 == NULL)
	s1 = "";	

	if (s2 == NULL)
	s2 = "";

	if (s1 == NULL || s2 == NULL)
	return (NULL);

	len1 = strlen(s1);
	len2 = strlen(s2);
	len3 = len1 + len2;

	new_str = malloc((len3 + 1) * sizeof(char));
	if (new_str == NULL)
	return (NULL);

	strcpy(new_str, s1);
	strcat(new_str, s2);

return (new_str);
}
