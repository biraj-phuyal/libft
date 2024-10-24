/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:29:33 by marvin            #+#    #+#             */
/*   Updated: 2024/10/24 20:29:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_strlcat(char *dest, const char *src, unsigned int n)
{
    unsigned int s_len;
    unsigned int d_len;
    unsigned int i;

    s_len = 0;
    i = 0;
    d_len = 0;
    while (src[s_len])
        s_len++;
    while (dest[d_len])
        d_len++;
    if (dest[d_len] >= n)
        return (n + s_len);
    while (d_len + i + 1 < n && src[i])
    {
        dest[d_len + i] = src[i];
        i++;
    }
    dest[d_len + i] = '\0';
    return (s_len + d_len);
}