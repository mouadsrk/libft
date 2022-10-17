#include"libft.h"

size_t  ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
    size_t i,a;
    char *dstr,*sstr;
    dstr = (char*) dst;
    sstr = (char*) src;
     i = ft_strlen(sstr);
     a= 0;
    while(a < dstsize )
    {
        if(sstr[a])
        {
          if(a < dstsize -1)
          {
            dstr[a] = sstr[a];
            a++;
          }  
          else 
          {
            dstr[a] = '\0';
            return i;
          }
        }
        else
        {
            dstr[a] = sstr[a];
            return(i);
        }
    }
    return i;
}
// int main ()
// {
    
//     char d[10];
//     char s[0];
//     printf("%lu\n",ft_strlcpy(d,s,-1));
//     printf("%s",d);
// }