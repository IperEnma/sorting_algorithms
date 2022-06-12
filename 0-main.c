#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int *array = NULL;
    /*size_t n = sizeof(array) / sizeof(array[0]);*/

    print_array(array, 0);
    printf("\n");
    bubble_sort(array, 0);
    printf("\n");
    print_array(array, 0);
    return (0);
}
