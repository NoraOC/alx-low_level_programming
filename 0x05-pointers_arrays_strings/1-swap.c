#include "main.h"
/**
 * swap_int - swp the values of two integers
 * @a: integer to swp
 * @b: integer to swp
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
