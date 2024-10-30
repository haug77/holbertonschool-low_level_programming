#include "main.h"

/**
 * print_triangle - imprime un triangulo
 * @size: cantidad de # que formaran la base del triangulo
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size - x; y > 0; y--)
				_putchar(32);

			for (z = 1; z <= size; z++)
				_putchar(35);

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
