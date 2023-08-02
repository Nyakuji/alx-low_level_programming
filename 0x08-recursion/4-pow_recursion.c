#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power
*of y
* @x: shows base
* @y: shows exponent
* Return: value of x raised to the pwer y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* indicate error */
	}
	else if (y == 0)
	{
		return (1); /* Base case: x^0 = 1 */
	}
	else
	{
		return (x * _pow_recursion(x, y - 1)); /* recursive call */
	}
}
