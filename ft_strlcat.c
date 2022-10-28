#include"libft.h"

size_t  ft_strlcat(char * dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t a;
    size_t c;
    
    c = ft_strlen(src);
    
    if(!dstsize )
        return c ;
    a = 0;
    i = ft_strlen(dst);
    while(src[a] && i + a + 1 < dstsize && dst[i+ a]  )
    {
        dst[i + a] = src[a];
        a++;
    } 
    dst [i + a] ='\0';
    if(dstsize < i)
        return  c + dstsize ;  
    else if (dstsize >=  i)
        return  i + c ;
    return 0;
}



// int main ()
// {   
//      char s[] = "123456";
//      char s1[] = "123456";
   
//     printf("%lu\n", strlcat(s, s1, 100));  
// }










































// size_t  ft_strlcat(char * dst, const char *src, size_t dstsize)
// {
//     size_t i;
//     size_t a;
//     size_t c;
    
//     c = ft_strlen(src);
    
//     if(!dstsize )
//         return c ;
//     a = 0;
//     i = ft_strlen(dst);
//     while(src[a] && i + a + 1 < dstsize && dst[i+ a]  )
//     {
//         dst[i + a] = src[a];
//         a++;
//     } 
//     dst [i + a] ='\0';
//     if(dstsize < i)
//         return  c + dstsize ;  
//     else if (dstsize >=  i)
//         return  i + c ;
//     return 0;
// }
