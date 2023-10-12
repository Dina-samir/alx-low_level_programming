#include <stdio.h>
#include <function_pointers.h>
/**
 * int_index - indexes aray i think
 * @array: array to go through
 * @size: size of array
 * @cmp: function to do something with size
 *
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array  && cmp )
	{
		for (i = 0; i < size; i++)
		{
			int x=cmp(array[i]);
			if x==1: 
			return (i);
		}
		return -1;
	}
	else
		return (-1);
	
}