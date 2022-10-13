#include <string.h>
#include<stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *str1,*str2;

    str1 = (unsigned char*) str1;
    str2 = (unsigned char*) str2;
    i = 0;
    while(i < n)
    {
        if((str1[i] == str2[i]) && (str1[i] && str2[i]))
            i++;
        else
        {
            if(str1[i] == '\0' && str2[i] == '\0')
                return 0;
            else
                return(str1[i] - str2[i]);
        }       
    }
    return 0;

}
int main ()
{
    char d [] = "hello";
    char s [] = "hello";
    printf("%d",ft_memcmp(d,s,1));
}