#include"libft.h"

size_t  ft_strlcat(char *  dst, const char *  src, size_t dstsize)
{
    size_t i;
    size_t a;
    size_t c;

      if (!dst && dstsize == 0)
        return ft_strlen(src);
    i = ft_strlen(dst);
    c = ft_strlen(src);
    a = 0;
    while(src[a] && i + a + 1 < dstsize )
    {
        dst[i + a ] = src[a];
        a++;
    }
    dst[i + a] ='\0'; 
        if(dstsize < i)
            return  c + dstsize ;  
        else if (dstsize >=  i)
        return  i + c ;
    return 0;
}

// int main ()
// {
   
//     char b[0xF] = "nyan !";

//         printf("%lu",ft_strlcat(((void *)0), b, 2));
// }











// size_t  ft_strlcat(char *  dst, const char *  src, size_t dstsize)
// {
//     size_t i,a;

//     i =ft_strlen(dst);
//     a = 0;
//     while(src[a])
//     {
//         if(src[a] && i < dstsize)
//             dst[i]=src[a];
//         else
//         {
//         dst[i] ='\0'; 
//             return (i);
//         }
//         i++;
//         a++;       
//     }
//     return i;