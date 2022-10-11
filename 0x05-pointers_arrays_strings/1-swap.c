#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the first integer
 * @b: the second intege
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}