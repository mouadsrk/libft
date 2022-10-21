/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:49:41 by mserrouk          #+#    #+#             */
/*   Updated: 2022/10/21 17:49:44 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = (char *)haystack;
	if (ptr[i] == '\0' && needle[j] == '\0')
		return (ptr);
	while (ptr[i] && needle[j] && i < len)
	{
		while (ptr[i + j] == needle[j] && needle[j] && (i + j) < len)
			j++;
		if (j != strlen(needle) && j != 0)
			j = 0;
		i++;
	}
	if (j == strlen(needle) && j != 0)
		return (ptr + i - 1);
	return (NULL);
}
