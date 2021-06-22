/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 23:00:30 by marvin            #+#    #+#             */
/*   Updated: 2021/06/22 23:00:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;

    if (lst)
    {
        while (*lst)
        {
            tmp = (*lst)->next;
            ft_lstdelone(*lst, del);
            (*lst) = tmp;
        }
    }
    *lst = NULL;
}