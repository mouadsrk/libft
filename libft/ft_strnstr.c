/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:49:41 by mserrouk          #+#    #+#             */
/*   Updated: 2022/10/25 20:35:19 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;
	
	j = 0;
	i = 0;
	ptr = (char *)haystack;
	if(!haystack && !len)
		return 0;
	if(needle[0] == '\0')	
	return (char*) haystack;	
	while (ptr[i] && needle[j] && i < len)
	{
		while (ptr[i + j] == needle[j] && needle[j] && (i + j) < len)
			j++;
		if (j != ft_strlen(needle) && j != 0)
			j = 0;
		i++;
	}
	if (j == ft_strlen(needle) && j != 0)
		return (ptr + i - 1);
	return (NULL);
}