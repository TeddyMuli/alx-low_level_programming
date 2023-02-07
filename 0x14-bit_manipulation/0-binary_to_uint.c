#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/*
 * binary_to_uint - entry point
 * @b: member
 * Return: int
*/

unsigned int binary_to_uint(const char *b) {
    unsigned int x = *b;
    unsigned int size = sizeof(*b);
    for (int n = 0; n < size; n++ )
    {
       x = x * pow(2,size);
    }
    return (x);
}
