#include"libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i,ln,b;
    char *ptr ;

    ptr = (char *) haystack;
    i = 0;
    ln = 0;
    b = 0;
    if((!needle && !len) || (!len && !haystack) || (!needle && !haystack))
        return 0;
    while(ptr[i] && i < len)
    {
        if(ptr[i] == needle[ln])
        {
            while (ptr[i] == needle[ln])
            {
                 ln++;
               if (needle[ln] == '\0')
                return (ptr+b); 
                i++;
            }
                return(NULL);
        }
        i++;
        b++;
    }
    return (NULL);
}
 int main ()
 { 
          const char *largestring = "hello iupiupuiipBar B";
           const char *smallstring = "Bar";
           char *ptr;

           ptr = ft_strnstr(largestring, smallstring, 10);
           printf("%s",ptr);


}