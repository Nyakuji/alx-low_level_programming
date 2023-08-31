#include "main.h"

/**
* get_endianness - checks the endianess
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int num = 1;

	unsigned char *byt_ptr = (unsigned char *)&num;

	return (*byt_ptr == 1);
}
