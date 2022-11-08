/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:03:22 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/08 20:51:33 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = tmp;
	}
}

// int main()
// {
//     t_list *p1;
//     p1 = ft_lstnew(ft_strdup("hsvdhs"));
//     p1->next = ft_lstnew(ft_strdup("iasdi"));
//     p1->next->next = ft_lstnew(ft_strdup("moad"));

//     t_list *p0 = ft_lstnew(ft_strdup("sjbd"));
//     t_list *pn = ft_lstnew(ft_strdup("last node"));
//     ft_lstadd_front(&p1, p0);
//     ft_lstadd_back(&p0, pn);
//     ft_lstdelone(ft_lstlast(p0),free);
//     while(p0)
//     {
//         // p0 = ft_lstlast(p0)->content;
//         printf("%s\n", p0->content);
//         p0 = p0->next;
//     }
// }