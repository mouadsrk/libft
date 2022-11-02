#include"libft.h"


char * ft_strdup(const char *s1)
{
    size_t len,i;
    char *ptr;

    len = ft_strlen(s1);
    ptr =(char*) malloc(len + 1);
    if(!ptr)
        return 0;
    i = 0;
    while(s1[i])
    {
        ptr[i]=s1[i];
        i++;
    }
    ptr[i] = '\0';
    return(ptr);
}

// int main ()
// {
     

//     ft_strdup("");
         

// }

