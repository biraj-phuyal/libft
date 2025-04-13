/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:33:45 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/13 08:38:45 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strtrim(const char *s1, const char *set)
{
	size_t	len;
	char	*result;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	result = ft_substr(s1, 0, len);
	return (result);
}
/* 
int	main(void)
{
	char const s1[] = "LOLOLOLOLOL";
	char const *set = NULL;

	printf("%s", ft_strtrim(s1, set));
	return (0);
}
 */
