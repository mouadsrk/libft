#include"libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *ptr;

    i = ft_strlen(s);
    ptr = (char*) malloc(i + 1);
    i = 0;
    while(s[i])
    {
        ptr[i]=f(i,s[i]);
        i++;
    }
    ptr[i]=f(i,s[i]);
    return ptr;
}

char f(unsigned int a, char c)
{
   if(c != '\0')
    return c -32;
    return 0;     
}

// int main()
// {
//     char s[] ="mouad";
//     printf("%s",ft_strmapi(s,f));
// }
