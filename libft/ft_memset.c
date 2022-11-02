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
// int main()
// {
    // int a[] = {4569, 3, 5, 6, 9};
    // ft_memset(a, 57, 1);
    // int a = 45;
    //  ft_memset(&a, 57, 1);
    //   ft_memset((char*)&a+ 1, 5, 1);
    // ft_memset(a + 1, 5, 1);
    // int i = 0;
    //  while (i < 5)
    // {
    //    printf("%d\n", a);
    //     i++;
    // }
// }

