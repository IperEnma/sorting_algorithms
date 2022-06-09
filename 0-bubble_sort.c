#include "sort.h"
/**
 *
 *
 */
void bubble_sort(int *array, size_t size)
{
    size_t aux = 0, i = 0;
    int flag = 1;
    
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
