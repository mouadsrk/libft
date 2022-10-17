#include"libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
   size_t i;
   unsigned char a,*str;

   a = (unsigned char) c;
   str = (unsigned char*) s;
   i = 0;
   while(str[i] && i < n)
   {
      if(str[i] == a)
      {
            return(str + i);
      }
      i++;
   }
   return(NULL);
}

// int main()
// {
//    char str [] = "hello";
//    printf("%s",ft_memchr("hello",'l',4));
// }