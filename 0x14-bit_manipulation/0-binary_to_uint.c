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
    unsigned int length = sizeof(binary);
    for (int n = 0; n < binary; n++)
    {
      if ((b + n) != "0" || (b + n) != "1")
            printf("Enter valid binary number\n");
        
        else
        {
            while (binary != 0)
            {
             rem = binary % 10;
             binary = binary / 10;
             dec += rem * pow(2,i);
             i++;
            }
        }
      //  return (dec);
    }
}

int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
   /* n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    */
    return (0);
}
