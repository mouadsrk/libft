#include"libft.h"

char * ft_strrchr(const char *s, int c)
{
    int i;
    char *str;
    unsigned char b;

    b = (unsigned char) c;
    str = (char*) s;
    i =0;
    while (str[i])
        i++;
    while( i >= 0)
    {
        if(str[i] == b)
        return(str + i);
        i--;
    }     
    return(NULL);
}

// int main()
// {
//     char str[] = "hellolo";
//     printf("%s\n",ft_strrchr(str,'o'));
//     return 0;
// }
