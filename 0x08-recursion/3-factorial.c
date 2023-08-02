#include "main.h"

/**
* factorial - returns the factorial of a given number
* @n: input number
* Return: factorial of a number
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);/* indicate an error */
	}
	else if (n == 0)
	{
		return (1); /* base case */
	}
	else
	{
		return (n * factorial(n - 1)); /* recursive call */
	}
}
