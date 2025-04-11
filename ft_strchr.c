/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:32:24 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 19:51:21 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int search_str)
{
    while (*str)
    {
        if (*str == (char)search_str)
            return (char *)str;
        str++;
    }
    if ((char)search_str == '\0')
        return (char *)str;
    return (NULL);
}