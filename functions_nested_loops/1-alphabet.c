#include "main.h"

/**
 * print_alphabet - Punto de entrada del programa
 *
 * Funcion - Imprimir el abecedario
 */

void print_alphabet(void)
{
int abc = 'a';

while (abc <= 'z')
{
_putchar(abc);
abc++;
}

_putchar('\n');
}
