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
    int i;
    i = 0;
    ft_memset(&i,337,1);
    
     
    printf("%d",i);
      
}