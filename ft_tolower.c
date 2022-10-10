#include <ctype.h>
#include<stdio.h>

int ft_tolower(int c)
{
    if(c >= 65 && c <= 90)
        c += 32;
    return c;    
}

int main ()
{
    char c = 'a';
    printf("%c -> %c\n",c,ft_tolower(c));
    printf("%c -> %c\n",c,tolower(c));
}