#include <stdio.h>
#include "main.h"

/**
 * main - print _putchar
 */

int main(void)
{
char a[] = "_putchar";
int b;
for (b = 0; b < 8; b++)
{
putchar(a[b]);
}
_putchar('\n');
return (0);
}
