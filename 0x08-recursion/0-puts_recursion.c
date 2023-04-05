#include "main.h"
void _putRecursion(char *a)
{
	if (*a == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*a);
	_puts_recursion(a + 1);
}
