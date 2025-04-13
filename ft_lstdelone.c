/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:52:37 by biphuyal          #+#    #+#             */
/*   Updated: 2025/04/13 13:41:36 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
void	del(void *content) {
    printf("Deleted: %s\n", (char *)content);
    free(content);
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		lst->next = NULL;
		del(lst->content);
	}
}
/* 
int	main(void) {
    t_list *node = ft_lstnew(strdup("Hello"));
    ft_lstdelone(node, del);

    ft_lstdelone(NULL, del);
    ft_lstdelone(ft_lstnew(NULL), NULL);

    return (0);
}
*/
