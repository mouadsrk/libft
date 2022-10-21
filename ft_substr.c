#include"libft.h"

#include<stdio.h>
#include<stdlib.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t j,i;
    char *ptr;
    i = len - start;
    if (!s)
        return (NULL);
    ptr = (char *) malloc(i * sizeof(char) + 1);
        if(!ptr)
            return (NULL);
    j = 0;
    while(s[(size_t)start + j])
    {
        ptr[j] = s[start + j];
        j++;
    }
    ptr[j] = '\0';
    return (ptr);
}
// int main (){
//     char s[] = "serroukh";
//     char *d = ft_substr(s,1,8);
//     printf("%s",d);
//     free(d);
// }