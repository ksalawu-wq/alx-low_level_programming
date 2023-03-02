#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a: the array to reverse
 * @n: the number of elements in the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp; /* holds value */
	int o;    /* counter */
	int m = n - 1; /* reverse counter */

	for (o = 0; o < m; m++)
	{
		temp = a[o];
		a[o] = a[m];
		a[m] = temp;
		m--;
	}


}
