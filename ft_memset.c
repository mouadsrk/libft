#include<stdio.h>
#include<string.h>

  
void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    char *m;

    m = (char *) b;
    
    i = 0;
    while (*(m+i))
    {
        if (i < len)
            m[i] = c;
        else
            break;     
        i++;  
    }
    return (b);
}

int main ()
{
    char b [] = "hello";
     ft_memset(b,'5',3);
   // memset(b,'5',3);
    printf("%s\n",b);
}