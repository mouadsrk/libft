#include"libft.h"

  
void *ft_memset(void *b, int c, size_t len)
{
    size_t i; 
    i = 0;
    while (i < len)
    {
       ((unsigned char *)b)[i] = c;
       i++;
    }
    return (b);
}

int main ()
{
    int i[] ={1,2,2,3};
    size_t b;
    b = 0;

    while(b < 16)
    {
         ft_memset(&i+b,2,1);
         b += 4;
    }
    b = 0;
    while(b <= 4)
    { 
    printf("%d",i[b]);
    b++;
    }  
}