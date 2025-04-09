/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:39:19 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/09 12:58:42 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int n)
{
    unsigned int s_len;
    unsigned int i;

    s_len = 0;
    i = 0;
    while (src[s_len])
        s_len++;
    if (n == 0)
        return (s_len);
    while (i < n - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (s_len);
}

int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

char	*extract_word(char const *s, char c, int *k)
{
	int		start;
	int		len;
	char	*word;

	start = *k;
	len = 0;
	while (s[*k] && s[*k] != c)
	{
		(*k)++;
		len++;
	}
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, len + 1);
	return (word);
}

char	**free_all(char **result, int idx)
{
	while (idx-- > 0)
		free(result[idx]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	int		word_count;
	char	**result;

	if (!s)
		return (NULL);
	i = 0;
	word = 0;
	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (word < word_count)
	{
		while (s[i] == c)
			i++;
		result[word] = extract_word(s, c, &i);
		if (!result[word])
			return (free_all(result, word));
		word++;
	}
	result[word_count] = NULL;
	return (result);
}

/* 
int	main(void)
{
	char	**result;
	char	*s = "Hey,kid,do,you,like,violence?";
	char	c = ',';
	int		i = 0;

	result = ft_split(s, c);
	if (!result)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	while (result[i])
	{
		printf("result[%d]: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
 */
