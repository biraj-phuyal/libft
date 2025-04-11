/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:12:27 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 13:34:21 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int j;

    j = 0;
    if (!s || !f)
        return;
    while (s[j])
    {
        f(j, &s[j]);
        j++;
    }
}