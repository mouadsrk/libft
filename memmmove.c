#include<stdio.h>
#include<string.h>

   void *ft_memmove(void *dst, const void *src,size_t len)
   {
     size_t i;
     i = 0;
     char *str,* dstr;

        str = ( char*)src;
        dstr = (char*) dst;
        // while(str[i] || i < len)
        //     i++;
        // i -= 1;
        
        while( i < len)
        {
            dstr[i] = str[i];
            i++;
        }
        return 0;
    }

int main(void)
{
    char str[15] = "mouad";
    char str1[15] = "mouad";
    int tab[15] = {1,131072};
    int tab1[15] = {1,131072};
    int i = 0;
    
    printf("---------------------------------------------------------------\n");
    memmove(str, str + 2, 8);
    //ft_memmove(str1, str1 + 2, 8);
    printf("memmove ====> %s\n", str);
    printf("ft_memmove==> %s\n", str1);
    printf("---------------------------------------------------------------\n");
    memmove(tab, str + 2, 8);
    ft_memmove(tab1, str1 + 2, 8);
    while (i < 15)
    {
        printf("memmove ====> %d\n", str[i]);
        printf("ft_memmove==> %d\n", str1[i]);
        printf("---------------------------------------------------------------\n");
        i++;
    }
}
