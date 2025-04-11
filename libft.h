/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:34:09 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 15:56:37 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTH
#define LIBFTH

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nitems, size_t size);
int ft_isalnum(int ch);
int ft_isalpha(int c);
int ft_isacii(int c);
int ft_isdigit(int c);
int ft_isprint(char c);
char	*ft_itoa(int n);
void    *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void *memcpy(void *dest_str, const void *src_str, size_t n);
void *ft_memmove(void *dest_str, const void *src_str, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char *ft_strchr(const char *str, int search_str);
char	*ft_strdup(const char *src);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strjoin(char const *s1, char const *s2);
unsigned int ft_strlcat(char *dest, const char *src, unsigned int n);
unsigned int ft_strlcpy(char *dest, const char *src, unsigned int n);
int ft_strlen(const char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *dest, const char *src, size_t n);
char *ft_strnstr(const char *str, const char *search, size_t n);
char *ft_strrchr(const char *str, int c);
char *ft_strtrim(const char *s1, const char *set);
char *ft_substr(char const *str, unsigned int start, size_t len);
int ft_tolower(int ch);
int ft_touuper(int ch);

typedef struct s_list
{
    void *content;
    struct s_list *next;
}   t_list;

t_list *ft_lstnew(void *content);

#endif