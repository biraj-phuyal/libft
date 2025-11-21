/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:31:33 by biphuyal          #+#    #+#             */
/*   Updated: 2025/11/21 16:29:34 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*dp1;
	unsigned char	*dp2;

	dp1 = (unsigned char *)s1;
	dp2 = (unsigned char *)s2;
	while (n--)
	{
		if (*dp1 != *dp2)
			return (*dp1 - *dp2);
		dp1++;
		dp2++;
	}
	return (0);
}

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