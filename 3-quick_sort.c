#include "sort.h"
/**
 * swap - swapping array
 * @swap_element1: element array
 * @swap_element2: element array
 * Return: void
 */
void swap(int *swap_element1, int *swap_element2)
{
	int temp = 0;
	
	temp = *swap_element1;
	*swap_element1 = *swap_element2;
	*swap_element2 = temp;
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
	size_t left = 0, right = 0, pivot = 0;

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
		while (array[left] < array[pivot] && left < last)
			left++;
		while (array[right] > array[pivot] && right > first)
			right--;

		if (left <= right)
		{
			swap(&array[left], &array[right]);
			if (left != right)
				print_array(array, len);
			right--;
			left++;
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
