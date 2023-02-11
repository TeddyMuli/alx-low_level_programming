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
    unsigned int dec = 0, i = 0, rem;
    unsigned int binary = atoi(b);

            while (binary != 0)
            {
             rem = binary % 10;
             binary = binary / 10;
             dec += rem * pow(2,i);
             i++;
            }
            return (dec);
}
