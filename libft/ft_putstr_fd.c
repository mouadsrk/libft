#include"libft.h"


void ft_putstr_fd(char *s, int fd)
{
    size_t i;
    i = 0;
    if(!s)
        return ;
    while(s[i])
    {
        write(fd,s+ i,1);
        i++;
    }
}
// int main ()
// {
//     int fd;
//     char s[] = "mouad serrouk";

//     fd = open("test2.txt",O_CREAT | O_WRONLY,0777);
//     ft_putstr_fd(s,fd);
//     close(fd);
// }
