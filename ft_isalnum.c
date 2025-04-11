/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:36:50 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 15:51:12 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

int ft_isdigit(int c);

int ft_isalnum(int ch)
{
    if (ft_isdigit(ch))
        return (1);
    if (ch >= 'A' && ch <= 'Z')
        return (1);
    if (ch >= 'a' && ch <= 'z')
        return (1);
    return (0);
}
/* 
int main()
{
    int c = '/';
    printf("%d", ft_isalnum(c));
} */