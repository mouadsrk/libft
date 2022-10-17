#include"libft.h"

char  *ft_strchr(const char *s, int c)
{
    int i;
    char *str;

    str = (char*) s;
    i = 0;
    while(str[i] && str[i] != c)
        i++;
    if (str[i] == c)
    {
      return (str + i);
    }
    return (NULL);
}
// int main()
// {
//     char s[] = "hello";

//     printf("%s\n", ft_strchr(s,'l'));
//     printf("%s\n", strchr(s,'l'));

// }