/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:36:36 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/12 07:47:24 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char   *a;

    i = 0;
    a = (unsigned char *)s;
    while (i < n)
    {
        a[i] = 0;
        i++;
    }
}