#include "shell.h"

void *_realloc(void *ptr, int oldsize, int newsize)
{
    void *tmp;

    if (ptr == NULL)
    {
        tmp = malloc (newsize);
        return (tmp);
    }
    else if (newsize == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }
    else
    {

    }

}