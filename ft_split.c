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

char *next_word(char const *s, char c)
{
    int i;
    int j;
    int next_word;

    i = 0;
    
}

char **ft_split(char const *s, char c)
{

}