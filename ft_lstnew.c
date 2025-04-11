/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:30:30 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/11 14:11:10 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
}   t_list;

t_list *ft_lstnew(void *content)
{
    t_list *next_node;
    
    next_node= malloc(sizeof(t_list));
    if (!next_node)
        return (NULL);
    next_node -> content = content;
    next_node -> next = NULL;
    
    return (next_node);
}