#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array
* @size: size of memory
* @c: input
* Return: a
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	a = malloc(sizeof(char) * size);

	if (a == NULL || size == 0)
	{
	return (NULL);
	}

	for (b = 0; b < size; b++)
	a[b] = c;

	return (a);
}
