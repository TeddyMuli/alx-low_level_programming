#include "search_algos.h"
/**
* linear_search - function that searches for values in an array of integers
* @array: the array
* @size: the size of the of the array
* @value: value to search for
* Return: if the value is not present or the array is NULL,
*         else the first index where the value is located.
*/

int linear_search(int *array, size_t size, int value) {
    if (array == NULL)
        return (-1);
    
    for (size_t i = 0; i < size; i++) {
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
