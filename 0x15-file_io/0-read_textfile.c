#include "main.h"
#include <stdlib.h>
#include <sys/types.h>


/*
 * read_textfile - entry point
 * @filename: member
 * @letters: member
 * return: size_t
*/
ssize_t read_textfile(const char *filename, size_t letters) {
    ssize_t o, r, w;
    char *buffer;
    
    if(filename == NULL)
        return (0);
    
    buffer = malloc(sizeof(letters));
    if(buffer == NULL)
        return (0);

    o = open(filename, O_RDONLY);
    r = read(o, buffer, letters);
    w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}