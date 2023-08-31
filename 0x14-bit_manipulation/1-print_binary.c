#include "main.h"

/**
* print_binary - prints the binary representation of a number.
* @n: unsigned long integer
*
* Return: no return
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leading_zeroes = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if (n & mask)
		{
			leading_zeroes = 0;
			_putchar('1');
		}
		else if (!leading_zeroes)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
