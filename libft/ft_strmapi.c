#include"libft.h"

char *ft_strmapi(char const *s, char (*ft)(unsigned int, char))
{
    int i;
    char *ptr;

    i = 0;
    if(!s)
        return ft_strdup("");
    ptr = (char*) malloc((ft_strlen(s) + 1) *sizeof(char));
    if(ptr == NULL)
        return (NULL);
    while(s[i])
    {
        ptr[i] = ft(i, s[i]);
        i++;
    }
    ptr[i]='\0';
    return ptr;
}

// char ft(unsigned int a, char c)
// { 
//     return c -= a;
       
// }

// int main()
// {
//     char s[] ="mouad";
//     printf("%s",ft_strmapi(s,f));
// }
