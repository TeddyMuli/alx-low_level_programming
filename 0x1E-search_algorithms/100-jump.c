#include "search_algos.h"

/**
 * jump_search - function that implements jump search algorithim
 * @array: the array containing the element to be searched
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: Returns the index of the value
*/

int jump_search(int *array, size_t size, int value)
{
    size_t i, jump, step;

    if (array == NULL || size == 0)
        return (-1);

    jump = sqrt(size);
    step = 0;

    while (step < size && array[step] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", step, array[step]);
        step += jump;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", step - jump, step);

    for (i = step - jump; i < size && i <= step; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);

}
