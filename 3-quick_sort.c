#include "sort.h"
/**
 *
 *
 */
void quick_sort_suplement(int *array, size_t first, size_t last, size_t len)
{
    size_t i = first, j = last, pivot = 0, size = 0;
    int temp = 0;

   size = last - first;
   pivot = size / 2;
   printf("%ld\n", pivot);
   while(i != j && i < j)
   {
        if (array[i] > array[pivot] && array[j] < array[pivot])
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
        if (array[i] < array[pivot])
            i++;
        if (array[j] > array[pivot])
            j--;
	if (j == pivot)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		i = first;
		j = last;
	}
	if (i == pivot)
        {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
		i = first;
		j = last;
        }
	print_array(array, len);
	if (i + 1 == pivot && j - 1 == pivot)
		break;
    }
	
    if ((array[i] > array[pivot] && array[j] > array[pivot]) || (array[i] < array[pivot] && array[j] < array[pivot]))
    {
    	quick_sort_suplement(array, pivot + 1, last, len);
    	quick_sort_suplement(array, first, pivot, len);
    }
}
/**
 *
 *
 */
void quick_sort(int *array, size_t size)
{
    quick_sort_suplement(array, 0, size - 1, size);
}
