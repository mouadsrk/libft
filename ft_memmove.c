#include"libft.h"

// #include <string.h>
// #include<stdio.h>

   void *ft_memmove(void *dst, const void *src, size_t len)
   {
    char *d;
    char *s;
    size_t i;
 
    d = (char *) dst;
    s = (char*) src ; 
    i = 0;
    if(d > s)
    {
     while(d[i])
     i++;
     

     


    }
    else
      s = ft_memcpy(s,d, len);  
    return( (void*)dst);
}
// int main()
// {
//   char d[] = "mouad serrouk";
//   char s[]  = ft_memcpy(s,d,11);
//   printf("%s\n",s);
//     memmove(d + 2 , d  , 11);
//     printf("%s",d);

// }