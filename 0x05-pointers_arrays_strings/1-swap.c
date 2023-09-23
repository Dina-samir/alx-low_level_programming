#include "main.h"

/**
* swap_int - function that swaps the values of two integers
*
* @a: frist integer parameter
* @b: second integer parameter
*
* Return: void
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
