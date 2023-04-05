#include "main.h"
void _printRevRecursion(char *a)
{
	if (*a)
	{
		_print_rev_recursion(a + 1);
		_putchar(*a);
	}
}
