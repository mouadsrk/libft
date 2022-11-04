/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:44:04 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/03 21:45:28 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write (fd, s + i, 1);
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
