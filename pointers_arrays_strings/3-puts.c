#include "main.h"
/**
 * _puts - Imprime un string
 * @str: string ingresado para que la funcion imprima
 */
void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
