#include "main.h"

/**
 * print_diagonal - imprime el caracter / una cantidad n de veces
 * @n: cantidad de veces que se imprimira el caracter /
 */
void print_diagonal(int n)
{
	int o, p;

	if (n > 0)
	{
		for (o = 0; o < n; o++)
		{
			for (p = 0; p < n; p++)
				_putchar(10);
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
