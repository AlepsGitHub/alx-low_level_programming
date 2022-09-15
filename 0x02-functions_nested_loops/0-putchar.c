#include "main.h"

/**
 *
 * main - program that prints _putchar.
 * main - Entry point
 *
 * Return
 *
 *
 */


int main(void)
{
char c[8] = "_putchar";
int i = 0;
while (i < 9)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}
