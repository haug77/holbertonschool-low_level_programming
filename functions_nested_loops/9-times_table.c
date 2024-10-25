#include "main.h"

/**
 * times_table - imprime las tablas del 0 al 9
 */
void times_table(void)
{
int m, n, o;
for (m = 0; m <= 9; m++)
{
for (n = 0; n <= 9; n++)
{
o = m * n;
if (n > 0)
{
_putchar(',');
_putchar(' ');

if (o < 10)
_putchar(' ');
}
if (o >= 10)
{
_putchar((o / 10) + '0');
_putchar((o % 10) + '0');
}
else
_putchar(o + '0');
}
_putchar('\n');
}
}
