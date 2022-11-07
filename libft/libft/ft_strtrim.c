/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:09:02 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/05 00:45:05 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strfind(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1 [i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

int	ft_strrfind(char const *s1, char const *set)
{
	int	i;

	i = 0;
	if (s1[i])
	{
		i = ft_strlen(s1);
		while (ft_strchr(set, s1[i]) && i >= 0)
			i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (!s1)
		return (NULL);
	i = ft_strfind(s1, set);
	j = ft_strrfind(s1 + i, set);
	return (ft_substr(s1 + i, 0, j + 1));
}
