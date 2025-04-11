/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:37:14 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 15:47:15 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

int ft_isdigit(int c)
{
    if (c >= 0 && c <= 9)
        return (1);
    return (0);
}
/* 
int main()
{
    char c = 9;
    printf("%d", ft_isdigit(c));
} 
*/