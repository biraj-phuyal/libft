/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:37:21 by biphuyal          #+#    #+#             */
/*   Updated: 2025/03/03 18:37:22 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

int ft_isprint(char c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}

int main()
{
    char c = '8';
    printf("%d", ft_isprint(c));
}