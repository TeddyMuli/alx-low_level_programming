#include <stdio.h>

/**
 * main- entry point
 * Return: 0
 */

int main(void)
{
 	    int i = 0;
        	int j;

	    while(i <= 9)
	        {
            for (j = 0; j <= 9; j++)
               {
                       if (i < j)
	          {
										                                putchar('i');
														putchar('j');
		                    if (i != 8)
		                             {
	                                 putchar(',');
		                        putchar(' ');
                                 }
												                         }
		            }

                  i++;
          }

}


