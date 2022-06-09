#include "sort.h"
/**
 *
 *
 */
void selection_sort(int *array, size_t size)
{
    size_t i = 0, j = 0, position = 0;
    int temp = 0, flag = 0, value = 0;
    
    for (i = 0; i < size; i++)
    {
        flag = 0;
        for (j = i + 1; j < size; j++)
        {
            if (flag)
            {
                if(array[position] > array[j])
                {
                    position = j;
                    value = array[j];
                }
            }
            else if (array[i] > array[j])
            {
                flag = 1;
                position = j;
                value = array[j];
            }
        }
        if (flag)
        {
            temp = array[i];
            array[i] = value;
            array[position] = temp;
            print_array(array, size);
        }
    }
}
