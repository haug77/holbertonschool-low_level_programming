#include "main.h"

/**
 * print_alphabet - Punto de entrada del programa
 *
 * Funcion - Imprimir el abecedario
 */

void print_alphabet(void)
{
int abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
}

_putchar('\n');
}
