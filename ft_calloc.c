#include <stdlib.h>
#include<stdio.h>

void * calloc(size_t count, size_t size)
{
    void *ptr ;
    ptr = malloc(count * size);
    ptr = ft_bezero(ptr,0,count * size);
}