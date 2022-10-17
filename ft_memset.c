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

// int main ()
// {
//     char *b1 = (char*)malloc(sizeof(char) * (0xF0000 + 1));

//     ft_memset(b1,'5',0xF0000);
//     memset(b1,'\5',0xF0000);
//     printf("%lu\n",strlen(b1));
//     free(b1);
// }