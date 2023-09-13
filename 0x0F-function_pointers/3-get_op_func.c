#include <stddef.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - Get the function pointer corresponding to an operator string.
 * @s: The operator string to be matched.
 *
 * Return: A pointer to the arithmetic operation function corresponding to 's',
 * or NULL if 's' does not match any known operator.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
		return (ops[i].f);
		i++;
	}
	return (NULL);
}
