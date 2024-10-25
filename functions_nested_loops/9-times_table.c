#include "main.h"

/**
 * times_table - imprime las tablas del 0 al 9
 */
void times_table(void)
{
int t, num, c;
for (t = '0'; t <= '9'; t++)
{
for (num = '0'; num <= '9'; num++)
{
c = t * num;
_putchar(c + '0');
}
}
}
