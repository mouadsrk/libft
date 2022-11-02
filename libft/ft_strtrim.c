#include"libft.h"


size_t ft_strfind(char const *s1, char const *set)
{
    size_t i;
    i = 0;
    while(s1[i] && strchr(set,s1[i]))
        i++;
    return i;
}
size_t ft_strrfind(char const *s1, char const *set)
{
size_t i;
    i = ft_strlen(s1) - 1;
    while(s1[i] && strchr(set,s1[i]))
        i--;
        return i;  
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i,j;
    if(!s1 )
        return NULL;
    i = ft_strfind(s1,set);       
    j = ft_strrfind(s1,set);
    return (ft_substr(s1, i, (j - i) + 1));
}

// int check_character(char c, char *set)
// {
//     size_t i;
//     i = 0;
//     while (set[i])
//     {
//         if (set[i] == c)
//             return (0);
//         i++;
//     }
//     return (1);
// }
// int check_character2(char c, char *set, size_t len)
// {
//     while (len--)
//     {
//         if (set[len] == c)
//             return (0);
//     }
//     return (1);
// }


// char *ft_strtrim(char const *s, char const *set)
// {
//     size_t i;
//     size_t j;
//     size_t len;

//     if (!s)
//         return (NULL);
//     i = 0;
//     j = ft_strlen(s);
//     len = j;
//     while (s[i] && !check_character(s[i], (char *)set))
//         i++;
//     j--;
//     while (j && !check_character2(s[j], (char *)set, len))
//         j--;
//     // printf("i = %zu, j = %zu\n",i, j);
//     return (ft_substr(s, i, (j - i) + 1));
    
// }
int main()
{
    char *s1 = "xuxuxmuxuxux";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1,"xu");
    printf("%s", ret);
    // dsdlmsdlasd
}

// size_t ft_strfind(char const *s1, char const *set)
// {
//     size_t i,j;
//     i = 0;
//     j = 0; 
//     while(s1[i])
//     {
//         while(set[j])
//         {
//             if(set[j] == s1[i])
//             {
//             j = 0;
//             i++;
//             }
//             else
//             j++;
//         }  
//         return i;
//     }         
//     return i ;
// }

// size_t ft_strrfind(char const *s1, char const *set)
// {
//     size_t i,j;
//     j = 0;
//     i = ft_strlen(s1) - 1;
    
//     while(set[j])
//         {
//             while(set[j]==s1[i])
//             {
//                 j = 0;
//                 i--;
//             }
//             j++;
//         }
//     return i ;
// }