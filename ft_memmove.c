#include"libft.h"



 void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
    char *s;
    int a;
 
    d = (char *) dst;
    s = (char*) src ; 
    a =  len  -1  ; 
    if(d > s)
    {
    while(a >= 0)
    {
      d[a] = s[a];
     a--;
    }
    }
    else
      s = memcpy(s,d, len);  
    return( (void*)dst);
}
// int main()
// {
//   char d[] = "mouad serrouk";
//     ft_memmove(d + 2 , d  , 11);
//     printf("%s",d);

// }
