#include"libft.h"

void *ft_memcpy(void  *dst, const void  *src, size_t n)
{
   
    size_t i;
    char *d,*s;
    d = (char*) dst;
    s = (char *)src;
    i = 0;
    while(n--)
    {
       d[i] = s[i];
       i++;
    }      
    return (dst);
}
int main()
{
    
     printf("%lu",sizeof(size_t));
    
    
    // printf("%s",ft_memcpy(((void *)0), ((void *)0), 3));
}