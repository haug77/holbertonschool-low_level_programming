#include "main.h"

/**
 * print_diagonal - imprime el caracter / una cantidad n de veces
 * @n: cantidad de veces que se imprimira el caracter /
 */
void print_diagonal(int n)
{
	int o;

	if (n > 0)
	{
		for (o = 0; o < n; o++)
		{
			_putchar(47);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
