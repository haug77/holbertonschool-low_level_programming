#include "main.h"

/**
 * print_triangle - imprime un triangulo
 * @size: cantidad de # que formaran la base del triangulo
 */
void print_triangle(int size)
{
	int y, z;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (z = size; z > 0; z--)
				_putchar(32);
			_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
