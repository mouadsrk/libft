#include<stdio.h>
#include<string.h>
void *ft_memcpy(void  *dst, const void  *src, size_t n)
{
    size_t i;
    char *dstr,*sstr;
    
    sstr = (char*) src;
    dstr = (char*) dst;
    i = 0;
    while(sstr[i] && i < n)
    {
        dstr[i] = sstr[i];
        i++;
    }
    dstr[i] ='\0';
    return (dst);
}
int main()
{
    char str[] = "mouad";
    char dstr [4];
    ft_memcpy(str,str+2,4);
    printf("%s",str);
}