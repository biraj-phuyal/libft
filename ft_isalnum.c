/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:36:50 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 19:19:00 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

int ft_isdigit(int c);
int ft_isalpha(int c);

int ft_isalnum(int ch)
{
    return (ft_isalpha(ch) || ft_isdigit(ch));
}
/* 
int main()
{
    int c = '/';
    printf("%d", ft_isalnum(c));
} */