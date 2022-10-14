/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:45:15 by mserrouk          #+#    #+#             */
/*   Updated: 2022/10/13 23:45:16 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include<stdio.h>
#include<ctype.h>

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return 1;
    return 0;    
}

int main()
{
    printf("%d\n",ft_isascii(135));
    printf("%d",isascii(135));
    return 0;
}
