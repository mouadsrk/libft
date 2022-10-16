#include <string.h>
#include<stdio.h>

size_t ft_strlen(char  *str)
{
    size_t  i;
    i = 0;
    while((str[i]))
        i++;
    return i;    
}


size_t  ft_strlcat(char *  dst, const char *  src, size_t dstsize)
{
    size_t i,a;
    char *dstr,*sstr;
    dstr = (char *) dst;
    sstr = (char *) src;
    i =ft_strlen(dst);
    a = 0;
    while(sstr[a])
    {
        if(sstr[a] && i < dstsize)
            dstr[i]=sstr[a];
        else
        {
            dstr [i] = '\0';
            return (i);
        }
        i++;
        a++;       
    }
    return i;

}
int main ()
{
    char dst[20] = "helloewewgwgw";
    char src[]  = "mmmmmmmmmmm";
    printf("%lu\n",ft_strlcat(dst,src,20));
    printf("%s",dst);
}