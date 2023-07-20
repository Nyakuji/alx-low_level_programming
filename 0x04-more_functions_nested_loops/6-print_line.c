#include "main.h"

/**
*print_line - checks code for my function
*@n: shows integer parameter for my function
*
*Return: Always 0
*/
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

