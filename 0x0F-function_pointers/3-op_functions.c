#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum of two integer
 * @a: integer
 * @b: integer
 *
 * Return: result of the operation 
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub of two integer
 * @a: integer
 * @b: integer
 *
 * Return: result of the operation 
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul of two integer
 * @a: integer
 * @b: integer
 *
 * Return: result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div of two integer
 * @a: integer
 * @b: integer
 *
 * Return: result of the operation
 */
int op_div(int a, int b)
{
	if ( b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - mod of two integer
 * @a: integer
 * @b: integer
 *
 * Return: result of the operation
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
