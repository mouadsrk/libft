
#include"libft.h"

void *ft_calloc(size_t count, size_t size)
{
    char *ptr ;
    ptr = malloc(count * size);
    ft_bzero(ptr, count * size);
    return (NULL);
}