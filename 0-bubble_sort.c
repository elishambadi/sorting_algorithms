#include "sort.h"

/**
 * swap2 - swaps two numbers
 * @a : integer 1
 * @b : integer b
 */

void swap2(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array : array of ints to sort
 * @size : size of array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i = 1, j, temp = size;

	if (!array || size < 2)
		return;

	while (temp > 1)
	{
		i = 0;
		for (j = 1; j <= temp - 1; j++)
		{
			if (array[j - 1] > array[j])
			{
				swap2(array + j - 1, array + j);
				print_array(array, size);
				i = j;
			}
		}
		temp = i;
	}
}
