#include"libft.h"

// size_t  ft_strlcpy(char * dst, const char * src, size_t dstsize)
// {
//     size_t a;

//     a= 0;
//     while(a < dstsize )
//     {
//         if(src[a])
//         {
//           if(a < dstsize -1)
//           {
//             dst[a] = src[a];
//             a++;
//           }  
//           else 
//           {
//             dst[a] = '\0';
//             return a = ft_strlen(src);
//           }
//         }
//         else
//         {
//             dst[a] = '\0';
//             return a = ft_strlen(src);
//         }
//     }
//    return a = ft_strlen(src);
// }
size_t  ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
    size_t a;

    a= 0;
    while(a < dstsize - 1 && src [a] && dstsize > 0)
    {
        dst[a] = src[a];
        a++;
    }
    if(dstsize > 0)
    dst[a] = '\0';
    return a = strlen(src);
}

// int main()
// {
//     char *str = "BBBB";
//     char buff1 [] = "helo";
//     printf("%lu",ft_strlcpy(buff1,"a",0));
//     printf("%s",buff1);
// }
