#include "search_algos.h"

/**
* binary_search - Searches for a value in a sorted array
*                   of integers using binary search
* @array: pointer to the first element of the array
* @size: The number of elements in the array
* @value: The value to search for.
* Return: Returns -1 if the array is empty or returns position of value
*/

int binary_search(int *array, size_t size, int value) {
    size_t i, left, right;

    if (array == NULL)
        return (-1);
    
    left = 0;
    right = size - 1;

    while (left <= right) {
        size_t mid = (left + right) / 2;

        printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
