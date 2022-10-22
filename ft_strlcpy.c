#include"libft.h"

size_t  ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
    size_t a;

    a= 0;
    while(a < dstsize )
    {
        if(src[a])
        {
          if(a < dstsize -1)
          {
            dst[a] = src[a];
            a++;
          }  
          else 
          {
            dst[a] = '\0';
            return a = ft_strlen(src);
          }
        }
        else
        {
            dst[a] = src[a];
            return a = ft_strlen(src);
        }
    }
   return a = ft_strlen(src);
}
// }

// int main ()
// {   
//     char d[10];
//     char s[0];
//     printf("%lu\n",strlcpy(d,s,-1));
//     printf("%s",d);
// }

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
//             dst[a] = src[a];
//             return a = ft_strlen(sstr);
//         }
//     }
//    return a = ft_strlen(src);
// }