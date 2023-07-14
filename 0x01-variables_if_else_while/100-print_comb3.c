#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;
        x = 48;
	y = 48;

	while (y < 58)
	{
		x = 48;
		while (x < 58)
		{
			if (y != i && y < i)
			{
				putchar(y);
				putchar(x);
				if (x == 57 && y == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
