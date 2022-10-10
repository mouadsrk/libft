#include <ctype.h>
#include<stdio.h>

 int ft_toupper(int c)
 {
     if (c >= 97 && c <= 122 )
        c += -32;
    return c;    
 }

int main ()
{
    unsigned char v = 'c' ;
     printf("%c -> %c \n",v,ft_toupper(v));
    printf("%c -> %c \n",v,toupper(v));
    
}
