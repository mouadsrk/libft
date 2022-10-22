
#include"libft.h"
#include <assert.h>

#include <string.h>

void *ft_calloc(size_t count, size_t size)
{
    void  *ptr ;
     
    if (count >= 2147483647 || size == 2147483647)
        return(NULL);
    ptr = malloc(count * size);
    if(!ptr)
        return NULL;
    ft_bzero(ptr, count * size);
    return (ptr);
}
// int main ()
// {
//     char *ptr;
// 	ptr = ft_calloc(SIZE_MAX - 1, SIZE_MAX - 1);
//     assert(ptr == NULL);
