#include"libft.h"


char * ft_strdup(const char *s1)
{
    size_t len,i;
    char *ptr;

    len = 0;
    len = ft_strlen(s1);
    len++;
    ptr =(char*) malloc(len);
    i = 0;
    while(s1[i])
    {
        ptr[i]=s1[i];
        i++;
    }
    return(ptr);
}
int main ()
{
    char s[] = "hello";
    char *sr;
    printf("%s",ft_strdup(s));

}