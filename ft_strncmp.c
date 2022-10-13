#include <string.h>
#include<stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i =0;
    while(i <  n)
    {     
         if ((s1[i] == s2[i]) && (s1[i] && s2[i]))
            i++;
         else
         {  
            if (s1[i] == '\0' && s2[i] == '\0')
                    return 0;
            else
                return 0;     
         }
    }
    return(0);
}        
int main()
{
    size_t n =2;  
    const char d []="hello";
    const char s []="hello";
    printf("%d\n",strncmp(s,d,1));
    printf("%d",ft_strncmp(s,d,1));
}