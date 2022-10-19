#include"libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i,b;
    char *ptr;
    i = 0;
    if(s1[i] == set[i])
        ptr = ft_substr(s1,1,ft_strlen(s1));
    else
        ptr= ft_strdup(s1);
    i = ft_strlen(ptr);
    b = ft_strlen(set);
    if(ptr[i] == set[b]);
        ptr[i] == '\0';
}