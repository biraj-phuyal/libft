/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:31:09 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 14:22:50 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *memcpy(void *dest_str, const void *src_str, size_t n)
{
    size_t i;
    char *d;
    const char *s;

    i = 0;
    d = (char *)dest_str;
    s = (const char *)src_str;
    while (n > i)
    {
        d[i] = s[i];
        i++;
    }
    return (dest_str);
}