#include "main.h"

/**
 * print_line - imprime _ una cantidad n de veces
 * @n: cantidad de veces que se imprimira _
 */
void print_line(int n)
{
	int o;

	for (o = 0; o <= n; o++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
