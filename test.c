#include"libft.h"
#include<stdio.h>

size_t ft_lastchar(char const *s, char c)
{
    size_t i , r;
     i = 0;
    r =0;
   
    while(s[i])
    {
          if((s[i] != c && s[i +1] == c) || (s[i-1] == c && s[i] != c && s[i + 1] == '\0'))
              r++;
     i++;
    }
    return r;
}

char **ft_split(char const *s, char c)
{
    size_t i,r,j,b;
    
    char **arr;

    r =ft_lastchar(s,c);
    arr = (char**)malloc(r * sizeof(char*));
    if (!arr)
        return (NULL);
   i = 0;
j = 0;
while(i < r)
    {   
        b = 0;
        while(s[j] != c && s[j])
        {
            b++;
            j++;
        }
        if(b != 0) 
        {
           
            arr[i] = (char*)malloc(b * sizeof(char*)+1);
            i++;
        }
        j++;
    }
    i = 0;
    j = 0;
    while(i < r)
    {   
        b = 0;
        while(s[j] != c && s[j])
        {
            arr[i][j] = s[j];
            printf("%c",arr[i][j]);
            b++;
            j++;
        }
        if(b != 0) 
        {  
            arr[i][b] = '\0';    
            printf("\n");
            i++;
        }
        j++;
    }

    return(arr);
}
int main(){
    
    char s[] ="++hello+++i'm+split++!";
    char c = '+' ;
    char **arr=ft_split(s,c);
    int i = 0;
    int j = 0;

    // while(arr[i])
    // {
    //     while(arr[i][j])
    //     {
    //          printf("%c",arr[i][j]);
    //         j++;
    //     }
    //     j = 0;
    //     i++;
    // }
     
}
