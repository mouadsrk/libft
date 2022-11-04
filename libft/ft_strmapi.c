/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:01:44 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/03 23:05:48 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*ft)(unsigned int, char))
{
	int		i;
	char	*ptr;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	ptr = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
	ptr [i] = ft(i, s[i]);
	i++;
	}
	ptr [i] = '\0';
	return (ptr);
}
