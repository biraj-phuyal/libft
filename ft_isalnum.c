/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:01:28 by marvin            #+#    #+#             */
/*   Updated: 2024/10/16 17:01:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_isalnum(int ch)
{
    if (ch >= 0 && ch <= 9)
        return (1);
    if (ch >= 'A' && ch <= 'Z')
        return (1);
    if (ch >= 'a' && ch <= 'z')
        return (1);
    return (0);
}
int main()
{
    int c = '/';
    printf("%d", ft_isalnum(c));
}