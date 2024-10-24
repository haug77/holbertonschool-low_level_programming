#include "main.h"

/**
 * _islower - Retorna un valor segun sea la variable
 * @c: un caracter ASCII
 * Return: 1 si la variable c es una letra minuscula, sino retorna 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
