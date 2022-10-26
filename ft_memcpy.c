#include"libft.h"

void *ft_memcpy(void  *dst, const void  *src, size_t n)
{
    size_t i;
    unsigned char *d;
    unsigned char *s;
    if(!dst && !src)
        return 0;
    d = (unsigned char*) dst;
    s = (unsigned char *)src;
    i = 0;
   
    
    while( i < n )
    {
        d[i] = s[i];
        i++;
    }
    return ((void*) d);
}
// int main()
// {
// char src[] = "test basic du memcpy !";
// 	char buff1[22];
// 	char buff2[22];
//     printf("%s",memcpy("HELL","B", 30));
// }