#include "sort.h"
/**
 * bubble_sort - method sorting bubble
 * @array: array
 * @size: size array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int flag = 1;
	size_t aux = 0, i = 0;

	if (array == NULL)
		return;

	while (flag)
	{
		flag = 0;
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				flag = 1;
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
