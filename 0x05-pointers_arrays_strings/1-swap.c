#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: first integer value
 * @b: second integer value
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
