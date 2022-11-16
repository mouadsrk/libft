/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:19:10 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/11 22:51:18 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*str;

	a = c;
	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == a)
			return (str + i);
		i++;
	}
	return (0);
}
