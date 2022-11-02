#include"libft.h"
#include<limits.h>

int ft_atoi(const char *str)
{
    int i;
    int s;
    long int r;
    
    i =0;
    r = 0;
    s = 1;   
    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] =='-' || str[i] == '+')
    {
        if(str[i] == '-')
            s = - 1;
        i++;    
    }
        while(str[i] >= '0' && str[i] <= '9')
        {
            if( r > 2147483647 && s == 1)
                return -1;
            if (r > 2147483648 && s == -1)
                return 0;
            r = r * 10 + str[i] - 48;
            i++;
        }        
    return ((int) r * s);            
}

// int main()
// {
//     char n[40] = "99999999999999999999999999";
//     printf("%d",atoi(n));
// }
