#include "main.h"

/**
 * _abs - Retorna el valor absoluto de un numero entero
 * @e: parametro de la funcion
 * Return: retorna e si este es positivo, sino retorna -e
 */
int _abs(int e)
{
if (e < 0)
return (-e);
else
return (e);
}
