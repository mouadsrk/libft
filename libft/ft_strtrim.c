#include"libft.h"


int ft_strfind(char const *s1, char const *set)
{
    int i;
    i = 0;
    while(s1[i] && strchr(set,s1[i]))
        i++;
    
    return i;
}
int ft_strrfind(char const *s1, char const *set)
{
    int i;
    i =0;
    if(s1[i] !='\0')
    {  
    i = ft_strlen(s1) - 1;
     
    while(s1[i] && strchr(set,s1[i]))
        i--;
    }
        return i; 
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    if(!s1 )
        return NULL;
    i = ft_strfind(s1,set);       
    j = ft_strrfind(s1,set);
    return (ft_substr(s1, i, (j - i)+1));
}
// int main()
// {  
// printf("%s",ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet",""));

// }