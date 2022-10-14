/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserrouk <mserrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:44:50 by mserrouk          #+#    #+#             */
/*   Updated: 2022/10/13 23:44:51 by mserrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c);

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90 ) || ( c >= 97 && c <= 122))
        return 1;
    return 0;
}

int main ()
{
    printf("%d\n",ft_isalpha('n'));
    printf("%d",isalpha('n'));
}







