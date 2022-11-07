/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:14:15 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/03 23:17:09 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

#include<stdio.h>
#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*ptr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len >= ft_strlen(s))
		ptr = (char *) malloc((ft_strlen(s) - start + 1) * sizeof(char));
	else
		ptr = (char *) malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	j = 0;
	while (s[start + j] && (j < len))
	{
		ptr[j] = s[start + j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
