/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:29:09 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/13 00:31:16 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	c;

	c = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (c);
	len = ft_strlen(dst);
	if (len > dstsize)
		return (c + dstsize);
	while (i + len < dstsize - 1 && src[i])
	{
		dst[i + len] = src [i];
		i++;
	}
	dst[i + len] = '\0';
	return (c + len);
}
