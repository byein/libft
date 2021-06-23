/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 23:21:29 by marvin            #+#    #+#             */
/*   Updated: 2021/06/22 23:21:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *result;
    t_list  *tmp;

    result = NULL;
    while (lst)
    {
        if (!(tmp = ft_lstnew((*f)(lst->content))))
        {
            ft_lstclear(&result, del);
            return (NULL);
        }
        ft_lstadd_back(&result, tmp);
        tmp = tmp->next;
        lst = lst->next;
    }
    return (lst);
}