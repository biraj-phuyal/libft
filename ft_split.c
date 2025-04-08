#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int get_words(char const *s, char c)
{
    int i;
    int words_found;

    i = 0;
    words_found = 0;
    while (s[i])
    {
        while (s[i] == c && s[i])
            i++;
        while (s[i] != c && s[i])
            i++;
        words_found++;
    }
    return (words_found);
}

char *words(char const *s, char c)
{
    int *i;
    int j;
    char next_word;

    
    i = 0;
    j = 0;
    while (s[*i] != c && s[j])
        j++;
    next_word = malloc(sizeof(char) * (j + 1));
    i = 0;
    while (s[*i])
    {
        while (s[j] != c)
        {
            next_word[i] = s[j];
            j++;
        }
        i++;
    }
    next_word[i] = '\0';
    return (next_word);
}

char **ft_split(char const *s, char c)
{
    int i;
    char **split;

    i = 0;

    
}