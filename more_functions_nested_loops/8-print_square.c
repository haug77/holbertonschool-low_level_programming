#include "main.h"

/**
 * print_square - imprime un cuadrado con el caracter #
 * @size: size del cuadrado
 */
void print_square(int size)
{
	int h, i;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (i = 0; i < size; i++)
				_putchar(35);

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
