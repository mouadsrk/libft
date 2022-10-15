#include<stdio.h>
#include<string.h>

int ft_atoi(const char *str)
{
    int r,s,i;
    i =0;
    r = 0;
    s = 1;
    while(str[i] == 32 || str[i] == 9)
        i++;
    if (str[i] =='-' || str[i] == '+')
    {
        if(str[i] == '-')
            s = - 1;
        i++;    
    }
        while(str[i] >= '0' && str[i] <= '9')
        {
            r = r * 10 + str[i] - 48;
            i++;
        }
    return r * s;            
}
int main()
{
    char c[0] = "";
    printf("%d",ft_atoi(c));
}