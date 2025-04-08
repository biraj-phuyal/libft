/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:32:43 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/05 10:32:44 by biphuyal         ###   ########.fr       */
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