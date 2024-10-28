#include "main.h"

/**
 * _isdigit - chequea si c es un digito y retorna un valor
 * @c: variable a verificar por la funcion
 * Return: 1 si el carácter esun digito, 0 en caso contrario
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
