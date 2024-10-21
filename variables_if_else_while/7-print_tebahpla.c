#include <stdio.h>

/**
 * main - Punto de entrada del programa
 *
 * Funcion - Imprimir el abecedario en reversa
 *
 * Return: 0 si se ejecuta correctamente
 */

int main(void)
{
char abc;

for (abc = 'z'; abc >= 'a'; abc--)
putchar(abc);

putchar('\n');

return (0);
}
