#include"libft.h"

#include<stdio.h>
#include<stdlib.h>

size_t ft_intlen(int n)
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
    char *str;
    size_t len;
    size_t i;

    len = ft_intlen(n);
    i = 10;
    str =(char*) malloc(len + 1 );
    if(!str)
        return (NULL);
     if(n < 0)
    {
      str[0] = '-';
      n *=-1;
    }
    str[len--]= '\0';
    while(n > 0)
    {
        str[len]= (n % i) + 48   ;
        n /=10;
        len-- ;
    }
   
    return (str);
}


int main()
{
  printf("%s",ft_itoa(456-3));
}