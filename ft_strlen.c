#include"libft.h"

size_t ft_strlen(const char  *str)
{
    size_t  i;
    i = 0;
    while((str[i]))
        i++;
    return i;    
}

// int main()
// {
//     ft_strlen(NULL);
//     printf("%lu\n",ft_strlen("bllo"));
//     printf("%lu\n",strlen("1234"));
//     return 0;
// }