/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:28:29 by mserrouk          #+#    #+#             */
/*   Updated: 2022/11/08 19:28:31 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
 if(!lst || !new)
    return ;
    new->next =*lst;
    *lst = new;    
}
// int main()
// {
//         t_list *l = ft_lstnew(strdup("nyacat"));
//         t_list *n = ft_lstnew(strdup("OK"));

        
// }