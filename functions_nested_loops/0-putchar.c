#include "main.h"

/**
 * main - Punto de entrada del programa
 *
 * Funcion - Imprimir _putchar
 *
 * Return: 0 si se ejecuta correctamente
 */

int main(void)
{
char *txt = "_putchar\n";
int i = 0;

/* recorrer la variable y pasar de caracter hasta llegar a \0 */
while (txt[i] != '\0')
{
_putchar(txt[i]);
i++;
}

return (0);
}
