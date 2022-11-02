#include"libc.h"


void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}

// int main(){
//     int fd;
   

//     fd = open("test.txt",O_CREAT|O_WRONLY);
//     ft_putchar_fd('t',fd);
//     close(fd);

// }
