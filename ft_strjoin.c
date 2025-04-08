/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:36:10 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/05 11:29:35 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <stdlib.h>

int ft_strlen(char const *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strjoin(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    int total_length;
    char *string;

    if (!s1 || !s2)
        return NULL;
    total_length = ft_strlen(s1) + ft_strlen(s2);
    string = (char *)malloc(total_length + 1);
    if (!string)
        return NULL;
    while (s1[i])
    {
        string[i] = s1[i];
        i++;
    }
    while (s2[j])
        string[i++] = s2[j++];
    string[i] = '\0';
    return string;
}
