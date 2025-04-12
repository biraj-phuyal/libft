/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:32:43 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 21:05:05 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_strlen(const char *s);

unsigned int ft_strlcat(char *dest, const char *src, unsigned int n)
{
    unsigned int s_len;
    unsigned int d_len;
    unsigned int i;

    s_len = ft_strlen(src);
    i = 0;
    d_len = 0;
    if (dest)
    {
        while (d_len < n && dest[d_len])
            d_len++;
    }
    if (d_len >= n)
        return (n + s_len);
    while (d_len + i + 1 < n && src[i])
    {
        dest[d_len + i] = src[i];
        i++;
    }
    dest[d_len + i] = '\0';
    return (s_len + d_len);
}