#include "sort.h"
#include <string.h>
/**
 * swap - swapping array
 * @len: size array
 * @array: array
 * @swap_element1: element array
 * @swap_element2: element array
 * Return: void
 */
void swap(int *array, int *swap_element1, int *swap_element2, size_t len)
{
	int temp = 0;

	temp = *swap_element1;
	*swap_element1 = *swap_element2;
	*swap_element2 = temp;
	if (*swap_element1 != temp)
		print_array(array, len);
}
/**
 * quick_sort_suplement - suplement recursive function
 * @array: array
 * @first: first element sorting
 * @last: last element sorting
 * @len: size array
 * Retun: void
 */
void quick_sort_suplement(int *array, size_t first, size_t last, size_t len)
{
	size_t slow = 0, fast = 0, pivot, flag = 0;

	if (first < last)
	{
		fast = slow = first;
		pivot = last;
		while (fast < pivot)
		{
			if (array[fast] <= array[pivot])
			{
				flag = 1;
				swap(array, &array[fast], &array[slow], len);
				slow++;
			}
			fast++;
		}
		swap(array, &array[slow], &array[pivot], len);

		if (flag == 1)
		{
			quick_sort_suplement(array, first, slow - 1, len);
			quick_sort_suplement(array, slow + 1, last, len);
		}
		else
		{
			quick_sort_suplement(array, first, slow, len);
			quick_sort_suplement(array, slow, last, len);
		}
	}
}
/**
 * quick_sort - sorting quick init
 * @array: array
 * @size: size array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_suplement(array, 0, size - 1, size);
}
