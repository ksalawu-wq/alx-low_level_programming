#include "main.h"

/**
* swap_int - swaps variables
* @a: variable to swap
* @b: variable to swap
*/

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;

}
