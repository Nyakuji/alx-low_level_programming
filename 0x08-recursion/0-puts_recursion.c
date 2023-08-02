#include "main.h"

/**
* _puts_recursion - prints a string, followed by a new line
* @s: shows string
* Return: no return
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s); /*prints the current character */
		_puts_recursion(s + 1); /*recursively call the function */
	}
}
