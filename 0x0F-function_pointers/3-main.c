#include "3-calc.h"

/**
 * main - checks my code
 * @argc: argument count.
 * @argv: argument vector.
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int m, n;
	int (*calculation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	calculation = get_op_func(argv[2]);

	if (calculation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	m = atoi(argv[1]);
	n = atoi(argv[3]);

	printf("%d\n", calculation(m, n));
	return (0);
}
