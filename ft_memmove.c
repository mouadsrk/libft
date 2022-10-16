#include <string.h>
#include<stdio.h>

   void *ft_memmove(void *dst, const void *src,size_t len)
   {
     size_t i;
     i = 0;
     char *str,* dstr;

        str = ( char*)src;
        dstr = (char*) dst;
        while(str[i] && i < len)
            i++;
        i -= 1;
        
        while((str[i]) && i >= 0)
        {
            dstr[i] = str[i];
            i--;
        }
        return 0;
    }
 int main()
{
    char src1[] ="mmmm";
    char str[] = "hello";
    ft_memmove(str,src1,4);
    printf("%s\n",str);
    printf("%s\n",src1);

}
