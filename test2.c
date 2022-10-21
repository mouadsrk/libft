#include<stdio.h>
#include<string.h>


char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    char *ptr;

    i = 0;
    j = 0;
    ptr = (char *)haystack;
    if(!haystack[i] && !needle[j])
        return(NULL);

while(ptr[i] && needle[j] && i < len )
{
    while(ptr[i + j] == needle[j] && needle[j])
        j++;
    if (j != strlen(needle))
        j = 0;    
    i++;
}
    if(j == strlen(needle) )
        return (ptr + i - 1);
      return(NULL);
}