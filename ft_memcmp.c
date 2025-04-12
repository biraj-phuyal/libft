/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:31:33 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/12 15:12:53 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)str1;
	us2 = (unsigned char *)str2;
	while (n--)
	{
		if (*us1 != *us2)
			return (*us1 - *us2);
		us1++;
		us2++;
	}
	return (0);
}

// ['a', 'b', 'c'] != [1, 2, 3] = oviously true,
// Need to read address of the content inside array? Nope. Need to get the bits used by the content? maybe.
/* 
int	main(void)
{
	const char	*str;
	const int	i;

    str = "Heklo";
    const char *str2 = "Hello"; 
    i = ft_memcmp(str, str2, 7);
    printf("%d", i);
}
 */