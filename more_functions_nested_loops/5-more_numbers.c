#include "main.h"

/**
 * more_numbers - imprime 10 veces los numeros del 0 al 14
 */
void more_numbers(void)
{
	int i, j;

		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
			if (i == 57)
			{
				for (j = 0; j <= 53; j++)
					j = i + j;
				_putchar(j);
			}
		}
}
