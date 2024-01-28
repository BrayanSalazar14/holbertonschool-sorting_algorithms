#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *                using bubble sort.
 *
 * This function sorts the elements of an integer array in ascending order
 * using the bubble sort algorithm.
 *
 * @array: Pointer to the first element of the array to be sorted.
 * @size: Number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, aux;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
}
