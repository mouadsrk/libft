#include"libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    unsigned int i;

    i = 0;
    while(s[i] != '\0')
    {
        f(i, s+i);                     //s pass pointer of full string
            i++;
    }
}

// void f(unsigned int i,char* s)
// {
//     int a;
//     a = 0;
//     while(s[a])
//     {
//         printf("%c",(s[a]-32)); 
//         a++;
//     }
//     printf("\n");  
//                                //modifie spesifec address
// }

// int main()
// {
//     char s[] ="mouad";
//     ft_striteri(s,f);
// }

// void ft_striteri(char *s, void (*f)(unsigned int,char*))
// {
//     unsigned int i;

//     i = 0;
//     while(s[i] != '\0')
//     {
//         f(i, s+i);                     //s pass pointer of full string
//             i++;
//     }
// }

// void f(unsigned int i,char* s)
// {
//     int a;
//     a = 0;
//     printf("  %d = ",i+1);
//     while(s[a])
//     {
//         // ; 
//         printf("%c",s[a] - 32); 
//         a++;
//     }  
//                              //modifie spesifec address
// }