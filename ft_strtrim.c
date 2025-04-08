/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:33:45 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/05 10:33:46 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <stdlib.h>

int is_in_set(char c, const char *set)
{
    int i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return 1;
        i++;
    }
    return 0;
}

char *ft_strtrim(const char *s1, const char *set)
{
    int i = 0;
    int count = 0;
    char *get_trimed_string;
    int j = 0;

    while (s1[i])
    {
        if (!is_in_set(s1[i], set))
            count++;
        i++;
    }
    get_trimed_string = (char *)malloc(sizeof(char) * (count + 1));
    if (!get_trimed_string)
        return 0;
    i = 0;
    while (s1[i])
    {
        if (!is_in_set(s1[i], set))
        {
            get_trimed_string[j] = s1[i];
            j++;
        }
        i++;
    }
    get_trimed_string[j] = '\0';
    return get_trimed_string;
}
