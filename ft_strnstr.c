/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:33:24 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/13 09:15:08 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strnstr(const char *str, const char *search, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    if (!*search)
        return (char *)str;
    if (!str && n == 0)
        return (NULL);
    while (str[i] && i < n)
    {
        j = 0;
        while (search[j] && (i + j) < n && str[i + j] == search[j])
            j++;
        if (search[j] == '\0')
            return (char *)&str[i];
        i++;
    }
    return (NULL);
}
/* 
int main()
{
    const char *str = "LOLOLOL";
    const char *dest = "LOK";
    int s = ft_strnstr(dest, str, 3);
    //printf("%s", str);
}
*/
