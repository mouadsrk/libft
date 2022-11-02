#include"libft.h"

char *ft_strmapi(char const *s, char (*ft)(unsigned int, char))
{
    int i;
    char *ptr;
    int a;

    if(!s)
        return ft_strdup("");
    i = ft_strlen(s);
    a = 32;
    ptr = (char*) malloc((i + 1) *sizeof(char));
    if(ptr == NULL)
        return NULL;
    i = 0;
    while(s[i])
    {
        ptr[i]=ft(a,s[i]);
        i++;
    }
    ptr[i]='\0';
    return ptr;
}

char ft(unsigned int a, char c)
{ 
    return c -= a;
       
}

// int main()
// {
//     char s[] ="mouad";
//     printf("%s",ft_strmapi(s,f));
// }
