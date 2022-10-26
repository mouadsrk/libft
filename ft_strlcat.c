#include"libft.h"

size_t  ft_strlcat(char * dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t a;
    size_t c;
    
    c = ft_strlen(src);
    if((!dst && !dstsize )|| (dst[0] == '\0' && !dstsize))
        return c ;
    a = 0;
    i = ft_strlen(dst);
    while(src[a] && i + a + 1 < dstsize )
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
//     char *s = "muo";
//     char *s1 = "hello" ;
//     printf("%lu\n",strlcat(s1,s1,5));
//     printf("%s",s);
// }




