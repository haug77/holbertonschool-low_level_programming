#include "main.h"

/**
 * print_alphabet_x10 - Punto de entrada del programa
 *
 * Funcion - Imprimir el abecedario 10 veces
 */

void print_alphabet_x10(void)
{
int line, abc;

for (line = '0'; line <= '10'; line++)
{
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
_putchar('\n');
}

}

}
