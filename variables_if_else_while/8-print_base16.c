#include <stdio.h>

/**
 * main - Punto de entrada del programa
 *
 * Funcion - Imprimir los numeros de base 16
 *
 * Return: 0 si se ejecuta correctamente
 */

int main(void)
{
int baseNum;
char baseChar;

for (baseNum = '0'; baseNum <= '9'; baseNum++)
putchar(baseNum);

for (baseChar = 'a'; baseChar <= 'f'; baseChar++)
putchar(baseChar);

putchar('\n');

return (0);
}
