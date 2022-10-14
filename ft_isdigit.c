/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:45:48 by mserrouk          #+#    #+#             */
/*   Updated: 2022/10/13 23:45:49 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include<ctype.h>

int ft_isdigit(int c)
{
    if(c >= 48 && c <= 57)
        return 1;
    return 0;
}

int main ()
{
    printf("%d\n",ft_isdigit(' '));
    printf("%d\n",isdigit(' '));
    return 0;
}


