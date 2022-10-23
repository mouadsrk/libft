#include"libft.h"



 void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
    char *s;
    size_t a;

  
    if(dst == src == len  )
      return dst;

    d = (char *) dst;
    s = (char *) src;
    a =  len - 1;
    if (d > s)
    {
      while(a > 0)
      {
        d[a] = s[a];
        a--;
         if(a == 0)
          d[a] = s[a];
      }
     
    }
    else
      s = ft_memcpy(d, s, len);  
    return ((void*)dst);
}

// int main()
// {
 
//   char * r2 = ft_memmove("", "" - 1, 0);
//   printf("%s",r2);
          
        
  

// }
