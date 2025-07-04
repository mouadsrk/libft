#include"libft.h"

#include<stdio.h>
#include<stdlib.h>

size_t ft_intlen(long n)
{
    size_t i;
    size_t con;

    i = 1;
    con = 1;
    if(n < 0)
        {
          con++;
          n *= -1;
        }
    while((n / i) >= 10)
    {
        i *= 10;
        con++;
    }   
        return(con);
}

char *ft_itoa(int n)
{   
    long a;
    char *str;
    size_t len;
    size_t i;

    a = n;
    len = ft_intlen(a);
    i = 10;
    str =(char*) malloc(len + 1 );
    if(!str)
        return (NULL);
     if(a< 0)
    {
      str[0] = '-';
      a *=-1;
    }
    str[len--]= '\0';
    while(a > 0)
    {
        str[len]= (a % i) + 48   ;
        a /=10;
        len-- ;
    }
   
    return (str);
}


// int main()
// {
//   printf("%s",ft_itoa(2147483647));
// }