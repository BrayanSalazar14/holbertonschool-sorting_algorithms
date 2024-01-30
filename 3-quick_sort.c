#include "sort.h"

void swap(int *x, int *y);
void quicksortRecursion(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);

/**
 * quick_sort - Sorts an array of integers in ascending order
 *               using quick sort.
 *
 * This function sorts the elements of an integer array in ascending order
 * using the quick sort algorithm.
 *
 * @array: Pointer to the first element of the array to be sorted.
 * @size: Number of elements in the array.
 */
void quick_sort(int *array, size_t size)
{
	quicksortRecursion(array, 0, size - 1, size);
}

/**
 * quicksortRecursion - Recursively performs the quick sort algorithm.
 *
 * This function recursively applies the quick sort algorithm to sort
 * the elements of an integer array in ascending order.
 *
 * @array: Pointer to the first element of the array to be sorted.
 * @low: Starting index of the subarray to be sorted.
 * @high: Ending index of the subarray to be sorted.
 * @size: Number of elements in the array.
 */
void quicksortRecursion(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivotIndex = partition(array, low, high, size);

		quicksortRecursion(array, low, pivotIndex - 1, size);
		quicksortRecursion(array, pivotIndex + 1, high, size);
	}
}

/**
 * partition - Partitions an array for quick sort.
 *
 * This function partitions an array into two subarrays such that elements
 * less than the pivot are on the left and elements greater than the pivot
 * are on the right.
 *
 * @array: Pointer to the first element of the array to be partitioned.
 * @low: Starting index of the subarray to be partitioned.
 * @high: Ending index of the subarray to be partitioned.
 * @size: Number of elements in the array.
 *
 * Return: Index of the pivot element after partitioning.
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivotValue = array[high];
	int i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivotValue)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] != array[high])
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}

/**
 * swap - Swaps two integers in an array.
 *
 * This function swaps the values of two integers in an array.
 *
 * @x: Pointer to the first integer.
 * @y: Pointer to the second integer.
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;

}
