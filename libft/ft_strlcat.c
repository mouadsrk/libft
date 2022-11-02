#include"libft.h"

size_t  ft_strlcat(char * dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t a;
    size_t c;
     
    c = ft_strlen(src);

    if(!dstsize)
        return c ;
    
    a = 0;
    i = ft_strlen(dst);
    while(  i + a  < dstsize -1  )
    {
        dst[i + a] = src[a];
        a++;
    } 
    dst [i + a] ='\0';
    if(dstsize < i)
        return  c + dstsize ; 
    return  i + c ; 
}



// int main ()
// {   
//   char dest[15] = "";
//   char src[]= "";
    

//     printf("%lu\n", strlcat(dest, src, 20));  
//     printf("%s",dest);
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
