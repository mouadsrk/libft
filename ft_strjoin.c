#include"libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i, len , a,b;
    char *ptr;
    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    ptr = (char *) malloc(len);
        
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















// if(ptr == NULL)
//             return(NULL);