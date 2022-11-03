/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 01:30:54 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/03 19:16:37 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_free(char **arr,int r)
{
    int i;

    i = 0;
    while(i <= r)
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}
int ft_word(char const *s, char c)
{
    int    i;
    int    r;
    
    r = 0;
    if(*s != '\0')
    {
        i = ft_strlen(s) - 1;
        if(s[i] != c)
            r++;
        i = 0;
        while(s[i])
        {
           if((s[i] != c && s[i + 1] == c && c != 0))
               r++;
        i++;
        }
    }
    return r;
}

void ft_allocation(int r,char c, char **arr, const char *s)
{
    int j;
    int i;
    int l;

    l = 0;
    i = 0;
    j = 0;
    
    while(l < r && s[i])
    {
        i = i + j;
        j = 0;
        while(s[i] == c && s[i])
                i++;
        while(s[i + j] != c && s[i + j])
            j++;
        if(l<r)
        {
          arr[l] = ft_substr(s,i,j);
          if (!arr[l])
              return  (ft_free(arr, l));      
         l++;
        }
    }
    arr[l] = NULL;
}

char **ft_split(char const *s, char c)
{
    int r;
    char **arr;

    if(s == NULL)
        return (NULL);
        
    r = ft_word(s,c);
    arr = (char **)malloc((r + 1) * sizeof(char *));
    if (!arr)
        return (NULL);
    ft_allocation(r,c,arr,s);
    return(arr);
}

// int main()
// {
//     char **spl = ft_split("", 'z');
//         printf("%s\n", spl[0]);
// }



// void ft_free(char **arr,int r)
// {
//     int i;

//     i = 0;
//     while(i <= r)
//     {
//         free(arr[i]);
//         i++;
//     }
//     free(arr);
// }
// int ft_word(char const *s, char c)
// {
//     int    i;
//     int    r;
    
//     r = 0;
//     i = ft_strlen(s) - 1;
//     if(s[i] != c)
//         r++;
//     i = 0;
//     while(s[i])
//     {
//         if((s[i] != c && s[i + 1] == c && c != 0))
//             r++;
//      i++;
//     }
//     return r;
// }

// void ft_allocation(int r,char c, char **arr, const char *s)
// {
//     int j;
//     int i;
//     int l;

//     l = 0;
//     i = 0;
//     j = 0;
    
//     while(l < r && s[i])
//     {
//         i = i + j;
//         j = 0;
//         while(s[i] == c && s[i])
//                 i++;
//         while(s[i + j] != c && s[i + j])
//             j++;
//         if(l<r)
//         {
//           arr[l] = ft_substr(s,i,j);
//           if (!arr[l])
//               return  (ft_free(arr, l));      
//          l++;
//         }
//     }
//     arr[l] = NULL;
// }

// char **ft_split(char const *s, char c)
// {
//     int r;
//     char **arr;

//     if(s == NULL)
//         return (NULL);
        
//     r = ft_word(s,c);
//     arr = (char **)malloc((r + 1) * sizeof(char *));
//     if (!arr)
//         return (NULL);
//     ft_allocation(r,c,arr,s);
//     return(arr);
// }
