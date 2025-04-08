/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:34:03 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/05 10:34:04 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_touuper(int ch)
{
    char c = (char)ch;
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    else
        return (c);
    return (c);
}

int main ()
{
    int c = '9';
    printf("%c", ft_touuper(c));
}