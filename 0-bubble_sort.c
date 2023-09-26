#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order using 
 * @array: input arrray
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, n;
    int tmp, swap;

    /*Main loop*/
    for (n = size, swap = 1; n > 0 && swap; n--)
    {
        swap = 0; // Initialize at 0, no swaps at beginning

        /* Scans array up to n-1*/
        for (i = 0; (i + 1) < n; i++)
        {
            /*If the current element is larger than the next, swap*/
            if (array[i] > array[i + 1])
            {
                tmp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = tmp;
                print_array(array, size); /*Call a function to display the array*/
                swap = 1; /*There's been a swap*/
            }
        }
    }
}
