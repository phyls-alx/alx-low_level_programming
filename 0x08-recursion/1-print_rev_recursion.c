#include "main.h"
/**
 *_putchar_rev_recursion - prints a string in reverse
 *@s: pointer block of memory to fill
 *Return: void
 */

void _print_rev_recursion(char* s)
{
if (*s == '\0')
	return;

_print_rev_recursion(s+1);
_putchar(*s);

}
