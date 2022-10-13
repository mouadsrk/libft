#include <string.h>
#include<stdio.h>

   void *ft_memmove(void *dst, const void *src,size_t len)
   {
     size_t i;
     char *str,* dstr,*swap;

        str = (const char*)src;
        // dstr = (char*) dst;
        // while(str[i] && i < len)
        //     i++;
        i--;
        len--;
        while((str[i]) )
        {
            // dstr[i] = str[i];
            // len--;
            i++;
        }
        return 0;
    }
 int main()
{
    char src1[] ="mmm";
    char str[] = "hello";
    ft_memmove(str,src1,2);
    printf("%s\n",str);
    printf("%s\n",src1);

}
