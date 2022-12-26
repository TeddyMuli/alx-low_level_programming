#include "main.h"
#include <stdio.h>
#include <ctype.h>

void rot13(char* s)
{
	int i = 0;

	while (i != '\0')
	{
	if (isalpha(s[i]))
       	{
     		 s[i] = (isupper(s[i]) ? 'A' : 'a') + (s[i] - (isupper(s[i]) ? 'A' : 'a') + 13) % 26;
	}
  }
	i++;
}
