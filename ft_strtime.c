#include<stdio.h>

size_t ft_strfind(char const *s1, char const *set)
{
    size_t i,j;
    i = 0;
    j = 0; 
    while(set[i])
        {
            while(set[j]==s1[i])
            {
                j = 0;
                i++;
            }
            j++;
        }
    return i ;
}

size_t ft_strrfind(char const *s1, char const *set)
{
    size_t i,j;
    j = 0;
    i = ft_strlen(s1) - 1;
    // if(!set)
    //  return 0; 
    while(set[j])
        {
            while(set[j]==s1[i])
            {
                j = 0;
                i--;
            }
            j++;
        }
    return i ;
}
char *ft_strtrim(char const *s1, char const *set)
{
    size_t i,j,cont,a;
    char *ptr;
    i = ft_strfind(s1,set);      // star writiing from i 
    j = ft_strrfind(s1,set);
    a = j - i + 2;
    ptr = (char *) malloc(a);
    cont = 0;
    while(cont < a - 1)
    {
        ptr[cont] = s1[i];
        cont++;
        i++;
    }
    ptr[cont] = '\0';
    return ptr;
}