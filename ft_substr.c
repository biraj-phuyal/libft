/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:33:52 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/12 12:08:20 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

char *ft_substr(char const *str, unsigned int start, size_t len)
{
    size_t j = 0;
    size_t str_len;
    char *string;

    if (!str)
        return NULL;
    str_len = ft_strlen(str);
    if (start >= str_len)
        return ft_strdup("");
    if (len > str_len - start)
        len = str_len - start;
    string = (char *)malloc(len + 1);
    if (!string)
        return NULL;
    while (j < len && str[start])
        string[j++] = str[start++];
    string[j] = '\0';
    return string;
}

/* 
int main(int argc, char **argv)
{
    const char *s = "HHHH";
    printf(ft_substr(*s, 2, 3));

}
*/