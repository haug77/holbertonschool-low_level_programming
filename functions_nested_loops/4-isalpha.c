#include "main.h"

/**
 * _isalpha - Retorna un valor segun sea la variable
 * @c: un caracter ASCII
 * Return: 1 si la variable c es una letra, sino retorna 0
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
