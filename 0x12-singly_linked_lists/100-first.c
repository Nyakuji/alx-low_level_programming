#include <stdio.h>

/**
* print_message - function is executed before main
*
* Return: no return
*/
void __attribute__ ((constructor)) print_message()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
