#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c);

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90 ) || ( c >= 97 && c <= 122))
        return 1;
    return 0;
}

int main ()
{
    printf("%d\n",ft_isalpha('n'));
    printf("%d",isalpha('n'));
}







