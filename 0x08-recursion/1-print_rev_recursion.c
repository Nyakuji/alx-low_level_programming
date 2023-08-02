#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse
* @s: shows string
* Return: no return
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return; /* base case: stops the recursion when end reached */
	}
	else
	{
		_print_rev_recursion(s + 1); /*recursively call the function*/
		_putchar(*s); /*print the current character after recursion */
	}
}
