#include<string.h>
#include<stdio.h>
#include<unistd.h>


void ft_bzero(void *s, size_t n)
{
    memset(s, 0, n);
}
int main()
{
    
    char ss[] = "hellokk";
    ft_bzero(ss,5);
    printf("%c",ss[6]);
}