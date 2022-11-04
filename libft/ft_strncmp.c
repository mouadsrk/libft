/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:05:53 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/03 23:08:45 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] == s2[i]) && (s1[i] && s2[i]))
			i++;
		else
		{
			if (s1[i] == '\0' && s2[i] == '\0')
				return (0);
			else
				return (((unsigned char *) s1)[i] - ((unsigned char *)s2)[i]);
		}
	}
	return (0);
}
