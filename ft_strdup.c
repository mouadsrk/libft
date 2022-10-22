#include"libft.h"


char * ft_strdup(const char *s1)
{
    size_t len,i;
    char *ptr;

    len = ft_strlen(s1);
    len++;
    ptr =(char*) malloc(len);
    if(!ptr)
        return NULL;
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
//      char s[] = "hello";
//     char *s;
//     printf("%s",ft_strdup(s));



//     char *s = malloc(-1);
//     if (s == NULL)
//         printf("yes\n");
//     else
//         printf("hjkkhk\n");
// }