#include "sort.h"
/**
 *
 *
 */
void quick_sort_suplement(int *array, size_t limit_left, size_t limit_right, size_t len)
{
    size_t left = 0, right = 0, pivot = 0;
    int temp = 0;

    left = limit_left;
    right = limit_right;
    pivot = limit_right;
    
    /*printf("\n***********\nENTRO A FUNCION Y RECIBO LISTA\n************\n");
    for (i = limit_left; i <= limit_right; i++)
        printf("%d, ",  array[i]);
    printf("\n************\n\n");*/

    while(left <= right)
    {
        while(array[left] < array[pivot] && left < limit_right)
            left++;
        while(array[right] > array[pivot] && right > limit_left)
            right--;

        if(left <= right)
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
    /*printf("value left: %ld\n", left);
    printf("value right: %ld\n", right);*/
     if(limit_left < right)
        quick_sort_suplement(array, limit_left, right, len);
     if(limit_right > left)
        quick_sort_suplement(array, left, limit_right, len);
}
/**
 *
 *
 */
void quick_sort(int *array, size_t size)
{
    quick_sort_suplement(array, 0, size - 1, size);
}
