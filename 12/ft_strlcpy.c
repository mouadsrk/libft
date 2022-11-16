/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:09:02 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/12 22:02:28 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;

	a = 0;
	while (a < dstsize - 1 && src[a] && dstsize > 0)
	{
		dst[a] = src[a];
		a++;
	}
	if (dstsize > 0)
	dst[a] = '\0';
	return (ft_strlen(src));
}
