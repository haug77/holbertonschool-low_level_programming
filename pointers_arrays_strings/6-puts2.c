#include "main.h"
/**
 * puts2 - Imprimr cada 2 caracteres de una cadena empezando por la primera
 * @str: string ingresado para que la funcion imprima
 */
void puts2(char *str)
{
	int a = 0;
	char b;

	while (str[a] != '\0')
	{

		if (str[a] % 2 == 0)
		{
			b = str[a];
			a++;
		}

		_putchar(b);
	}

	_putchar('\n');
}
