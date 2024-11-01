#include "main.h"
/**
 * _strlen - Retorna el largo de un string
 * @s: string para que la funcion trabaje
 * Return: l, la cantidad de caracteres en un string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}
