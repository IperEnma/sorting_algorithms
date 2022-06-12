#include "sort.h"
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
	size_t left = 0, right = 0, pivot = 0;
	int temp = 0;

	left = first;
	right = last;
	pivot = last;

	/*
	 * printf("\n***********\nENTRO A FUNCION Y RECIBO LISTA\n************\n");
	 * for (i = limit_left; i <= limit_right; i++)
	 * printf("%d, ",  array[i]);
	 * printf("\n************\n\n");
	 */

	while (left <= right)
	{
		while (array[left] < array[pivot] && left < first)
			left++;
		while (array[right] > array[pivot] && right > last)
			right--;

		if (left <= right)
		{
			/*printf("swap = %d y %d\n", array[left], array[right]);*/
			temp = array[left];
			array[left] = array[right];
			array[right] = temp;
			left++;
			right--;
			if ((left - 1) != (right + 1))
				print_array(array, len);
		}
	}
	if (first < right)
		quick_sort_suplement(array, first, right, len);
	if (last > left)
		quick_sort_suplement(array, left, last, len);
}
/**
 * quick_sort - sorting quick init
 * @array: array
 * @size: size array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_suplement(array, 0, size - 1, size);
}
