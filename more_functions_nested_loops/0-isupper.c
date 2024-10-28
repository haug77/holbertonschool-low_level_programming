#include "main.h"

/**
 * _isupper - chequea si c es mayuscula y retorna un valor
 * @c: variable a verificar por la funcion
 * Return: 1 si el carácter es mayúscula, 0 en caso contrario
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
