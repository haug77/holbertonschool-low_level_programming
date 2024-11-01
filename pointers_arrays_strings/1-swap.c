#include "main.h"
/**
 * swap_int - intercambiar valor de dos enteros
 * @a: parametro
 * @b: parametro
 */
void swap_int(int *a, int *b)
{
	int aa = *b;
	int bb = *a;

	*a = aa;
	*b = bb;
}
