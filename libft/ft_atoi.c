/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:04:55 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/03 20:29:00 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			s;
	long int	r;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (r > 2147483647 && s == 1)
			return (-1);
		if (r > 2147483648 && s == -1)
			return (0);
		r = r * 10 + str[i] - 48;
		i++;
	}
	return ((int) r * s);
}
