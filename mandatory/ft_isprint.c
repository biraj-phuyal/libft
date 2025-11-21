/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:37:21 by biphuyal          #+#    #+#             */
/*   Updated: 2025/11/21 16:29:34 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* 
int	main(void)
{
	char	c;

    c = '8';
    printf("%d", ft_isprint(c));
}
 */