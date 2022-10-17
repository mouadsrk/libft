#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i, len , a,b;
    char *ptr;
    len = strlen(s1) + strlen(s2) + 1;
    ptr = (char *) malloc(len);
        if(ptr == NULL)
            return(NULL);
    i = 0;
    a= 0;
    b = 0;;
    while(i < len)
    {
        if( s1[i] == '\0' || b == 1)
        {
            b = 1;
            ptr[i] = s2[a];
            a++;
        }
        else
            ptr[i] = s1[i];
        i++;
    }
    return(ptr);
}
int main ()
{
    char s1[0]  ;
    char s2[0] ;
    char *ptr = ft_strjoin(s1,s2);
    printf("%s",ptr);
}