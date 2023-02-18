#include "main.h"
#include <stdlib.h>

/*
 * append_text_to_file - Entry point
 * @filename: member
 * @text_content
 * Return: int
*/
int append_text_to_file(const char *filename, char *text_content)
{
    int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}