/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:53:06 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/13 00:44:39 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	b;

	b = (char) c;
	str = (char *) s;
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == b)
			return (str + i);
		i--;
	}
	return (NULL);
}
