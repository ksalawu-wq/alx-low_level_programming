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
	int k;    /* counter */
	int j = n - 1; /* reverse counter */

	for (k = 0; k < j; k++)
	{
		temp = a[k];
		a[k] = a[j];
		a[j] = temp;
		j--;
	}


}
