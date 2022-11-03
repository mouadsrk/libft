/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 01:30:54 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/03 02:47:46 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_free(char **arr,size_t r)
{
    size_t i;

    i = 0;
    while(i <= r)
    {
        free(arr[i]);
        i++;
    }
}
size_t ft_word(char const *s, char c)
{
    size_t    i;
    size_t    r;
    i = ft_strlen(s) - 1;
    r = 0;
    if(s[i] != c)
        r++;
    i = 0;
    while(s[i])
    {
          if((s[i] != c && s[i + 1] == c))
              r++;
     i++;
    }
    return r;
}
void ft_allocation(size_t r,char c,char **arr,const char *s)
{
    size_t j;
    size_t i;
    size_t l;

    l = 0;
    i = 0;
     while(s[i])
     {
		
         i = i + j;
        j = 0;
         while(s[i] == c && s[i])
             i++;
        while(s[i + j] != c && s[i + j])
            j++;
         arr[l]=(char*) malloc(j+ 1);
         if(arr[l]== NULL)
             ft_free(arr,r);
         arr[l]=ft_substr(s,i,j);      
        l++;
     }
     arr[r] = NULL;
}
char **ft_split(char const *s, char c)
{
    size_t r;
    char **arr;

    if(!s)
        return (NULL);
    r = ft_word(s,c);
	
    arr = (char**)malloc((r + 1) * sizeof(char*));
    if (!arr)
        return (NULL);
	
     ft_allocation(r,c,arr,s);
    return(arr);
	return 0;
}
// void ft_allocation(char **arr,char const *s,char c,size_t r)
// {
// 	size_t  b;
// 	size_t i;
// 	size_t j;

// 	j = 0;
// 	i = 0;
// 	while(i < r)
// 	{   
// 		b = 0;
// 		while(s[j] != c && s[j])
// 		{
// 			b++;
// 			j++;
// 		}
// 		if(b != 0)
// 		{ 
// 			arr[i] = (char*)malloc(b * sizeof(char*)+1);
// 			i++;
// 		}
// 		j++;
// 	}
// }
// void ft_strmake(char **arr, char const *s, char c, size_t r)
// {
// 	size_t		b;
// 	size_t		i;
// 	size_t		j;

// 	i = 0;
// 	j = 0;
// 	b = 0;
// 	while(i < r)
// 	{   
// 		b = 0;
// 		while(s[j] != c && s[j])
// 		{
// 			arr[i][b] = s[j];
// 			b++;
// 			j++;
// 		}
// 		if(b != 0)
// 		{
// 			arr[i][b] = '\0';    
// 			i++;
// 		}
// 		j++;
// 	}
// }
// size_t ft_lastchar(char const *s, char c)
// {
// 	size_t i , r;
// 	 i = ft_strlen(s) - 1;
// 	r =0;
// 	if(s[i] != c)
// 		r++;
// 	i = 0;
// 	while(s[i])
// 	{
// 		  if((s[i] != c && s[i + 1] == c))
// 			  r++;
// 	 i++;
// 	}
// 	return r;
// }
// void ft_allocation(size_t r,char c,char **arr,char *s)
// {
// 	char *copy;
// 	size_t j;
// 	size_t i;
// 	size_t l;

// 	j = 0;
// 	i = 0;
// 	while(s[i])
// 	{
// 		while(s[i] == c)
// 			copy[j++]=s[i++];
// 		while(s[i] != c )
// 			copy[j++] = s[i++];
// 		arr[l]=ft_strtrim(copy,c);
		

// 	}

// }
int main(){
    
    // char s[] ="++++mmm+++mmmm";
     char c = 'l' ;
    char **a = ft_split("+mouad+serrouk+m",c);
    int i = 0;
    int j = 0;
    while(a[i])
    {
        while(a[i][j])
        {
             printf("%c",a[i][j]);
            j++;
        }
        j = 0;
        printf("\n");
        i++;
    }

 }