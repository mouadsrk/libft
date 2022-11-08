/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:34:48 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/08 20:56:51 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*s;

	s = malloc (sizeof(t_list));
	if (s == NULL)
		return (NULL);
	s->content = content ;
	s->next = NULL;
	return (s);
}
// int main()
// {
// 	char *ptr = ft_strdup("mouad");
// 	t_list *s = ft_lstnew(ptr);
// 	printf("%s",(*s).content);
// 	printf("%p",(*s).next);
// }
