#include "sort.h"
/**
 *
 *
 */
void quick_sort_suplement(int *array, size_t first, size_t last)
{
    size_t i = first, j = last, pivot = 0;
    int temp = 0;

    pivot = (last / 2);
    while(i != pivot && j != pivot)
    {
        if (array[i] > array[pivot] && array[j] < array[pivot])
        {
            printf("primer cambio\n");
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
        printf("valor de i: %ld\n", i);
        printf("valor de j: %ld\n", j);
        printf("valor de pivot: %ld\n", pivot);
    }
    quick_sort_suplement(array, pivot + 1, last);
    quick_sort_suplement(array, first, pivot - 1);
}
/**
 *
 *
 */
void quick_sort(int *array, size_t size)
{
    quick_sort_suplement(array, 0, size - 1);
}
