#include"libft.h"

void ft_putnbr_fd(int n, int fd)
{

    if(n < 0)
    {
        n *= -1;
        ft_putchar_fd('-',fd);
    }
    if(n <= 9)
        ft_putchar_fd(n +48,fd);
    if(n >= 10)
    {
        ft_putnbr_fd(n/10,fd);
       ft_putchar_fd(n%10 +48,fd); 
    }

}
// int main ()
// {
//     int fd;
//     fd = open("test4.txt",O_CREAT | O_WRONLY,0777);
//     ft_putnbr_fd(0,fd);
//     close(fd);
// }