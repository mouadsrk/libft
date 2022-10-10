#include <string.h>
#include<stdio.h>

void *memchr(const void *s, int c, size_t n)
{
   size_t i;
   char a,*str;

   str = (char*) s;
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

int main()
{
   printf("%s",memchr("hello",108,4));
}