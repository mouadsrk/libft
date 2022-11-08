/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:53:05 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/04 17:20:35 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ptr = (char *) malloc(lens1 + lens2 + 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, lens1);
	ft_memcpy(ptr + lens1, s2, lens2);
	ptr[lens1 + lens2] = '\0';
	return (ptr);
}
