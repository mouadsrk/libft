/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:03:19 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/08 20:51:41 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstdelone(t_list	*lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// int main()
// {
//     t_list *p = ft_lstnew(ft_strdup("first node"));
//     p->next = ft_lstnew(ft_strdup("second node"));
//     p->next->next = ft_lstnew(ft_strdup("last node"));
//     ft_lstclear(&(p->next->next), free);
//     printf("%d", ft_lstsize(p));
// }