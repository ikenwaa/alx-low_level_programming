#include "3-calc.h"

/**
 * get_op_func - Pick the right function perform an operation
 * @s: Char op
 * Return: Pointer to the function that matches
 * with the operator
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

	while (ops[i].op != NULL && (*ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
