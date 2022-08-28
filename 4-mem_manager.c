#include "shell.h"

/**
 * step 1: allocate a temp memory with initial bufSize
 * step 2: copy from buff to tmp
 * step 3: free buff
 * step 4: 
 * step 5:
 * step 6: free tmp
 * step 7: return the new buff
 */

void *_realloc(void *ptr, int aint b)
{
    if (a >= b)
    {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }
    if (ptr == NULL)
    {
        return (NULL);
    }
    void *new;
    new = malloc(b);
    if (new == NULL)
    {
        return (NULL);
    }
    new = ptr;

    return (new);
}