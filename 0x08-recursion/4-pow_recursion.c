#include "main.h"
int Pow_recursion(int x, int y)
{
	if (y < 0)
	{
	
		return (-1);
	}
	
	if (y == 0)
	{
		return (1);
	}
	return (x * Pow_recursion(x, y - 1));
}
