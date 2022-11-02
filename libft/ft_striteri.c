#include"libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    unsigned int i;

    i = 0;
    while(s[i] != '\0')
    {
       f(i,s);                       //s pass pointer of full string
        i++;
    }
}
void f(unsigned int i,char* s)
{
    s[i] -= 32;                                 //modifie spesifec address
}

// int main()
// {
//     char s[] ="mouad";
//     ft_striteri(s,f);
//     printf("%s",s);
// }

