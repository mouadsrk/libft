/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:24:54 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/12 22:03:34 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		a;
	char	*d;
	char	*s;

	if (len == 0)
		return (dst);
	if (src == dst)
		return (dst);
		d = (char *) dst;
		s = (char *) src;
		a = (int)len - 1;
	if (d > s)
	{
		while (a >= 0)
		{
			d[a] = s[a];
			a--;
		}
	}
	else
		s = ft_memcpy(d, s, len);
	return ((void *)dst);
}
