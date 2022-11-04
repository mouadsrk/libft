/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:45:45 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/03 21:46:22 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	b;

	b = (char) c;
	str = (char *)s;
	i = 0;
	while (str[i] && str[i] != b)
		i++;
	if (str[i] == b)
		return (str + i);
	return (NULL);
}
