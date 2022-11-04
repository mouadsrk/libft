/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:37:59 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/03 20:46:27 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr ;

	if (count >= 2147483647 || size == 2147483647)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
