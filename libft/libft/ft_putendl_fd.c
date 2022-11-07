/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:38:56 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/03 21:41:04 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, s + i, 1);
		i++;
	}
	write(fd, "\n", 1);
}
// int main ()
// {
//     int fd;
//     char s[] = "mouad serrouk";

//     fd = open("test3.txt",O_CREAT | O_WRONLY,0777);
//     ft_putendl_fd(s,fd);
//     close(fd);
// }
