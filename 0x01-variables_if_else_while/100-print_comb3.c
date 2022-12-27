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
										                                  _putchar('i');
		                  _putchar('j');
		                    if (i != 8)
		                             {
	                                 _putchar(',');
		                        _putchar(' ');
                                 }
												                         }
		            }

                  i++;
          }

}


