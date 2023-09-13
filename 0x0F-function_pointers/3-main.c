#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - Entry point for a simple calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 if the number of arguments is incorrect
 * , and 99 if
 * the operator is invalid.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
