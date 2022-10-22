/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:49:41 by mserrouk          #+#    #+#             */
/*   Updated: 2022/10/22 00:55:21 by mserrouk         ###   ########.fr       */
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
	if(!ptr  && len == 0)
		return(NULL);
	if(needle[j] == '\0')
		return(ptr);
	while (ptr[i] && needle[j] && i < len)
	{
		while (ptr[i + j] == needle[j] && needle[j] && (i + j) < len)
			j++;
		if (j != strlen(needle) && j != 0)
			j = 0;
		i++;
	}
	if (j == strlen(needle) && j != 0)
		return (ptr + i - 1);
	return (NULL);
}


// int main()
// {
// 	char em[] = "";
// 	char s[] = "mouadf serrouk";
// 	 printf("%s\n", ft_strnstr(((void *)0), "fake", 0));
// 	 printf("%s\n",strnstr(((void *)0), "fake", 0));
// 	printf("%s\n",em);	
// }
