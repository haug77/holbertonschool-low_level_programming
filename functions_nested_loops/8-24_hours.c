#include "main.h"

/**
 * jack_bauer - imprime cada minuto del dia
 */
void jack_bauer(void)
{
int horas, mins;

for (horas = 0; horas < 24; horas++)
{
for (mins = 0; mins < 60; mins++)
{
_putchar((horas / 10) + '0');
_putchar((horas % 10) + '0');
_putchar(':');
_putchar((mins / 10) + '0');
_putchar((mins % 10) + '0');
_putchar('\n');
}
}
}
