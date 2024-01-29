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
	size_t i, j, aux;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
}
