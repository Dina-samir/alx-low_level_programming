#include "function_pointers.h"

/**
 * array_iterator - iterates through array
 * @array: array to go through
 * @size: size of array
 * @action: action function to take
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

