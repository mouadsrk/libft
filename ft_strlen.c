#include<stdio.h>
#include<string.h>

size_t ft_strlen(char  *str)
{
    size_t  i;
    i = 0;
    while((str[i]))
        i++;
    return i;    
}

int main()
{
    
    printf("%lu\n",ft_strlen("b"));
    printf("%lu\n",strlen("b"));
    return 0;
}