#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using selection sort.
 *
 * This function sorts the elements of an integer array in ascending order
 * using the selection sort algorithm.
 *
 * @array: Pointer to the first element of the array to be sorted.
 * @size: Number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, aux, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;

			aux = array[i];
			array[i] = array[min];
			array[min] = aux;	
		}
		print_array(array, size);
	}
}
